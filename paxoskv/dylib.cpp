#include "dylib_export.h"
#include "Proto/paxoskv.grpc.pb.h"
#include "PaxosKVServiceImpl.hpp"
#include "Handler/GetHandler.hpp"
#include "Handler/SetHandler.hpp"
#include "Handler/DelHandler.hpp"

::paxoskv::PaxosKVService::AsyncService service;

const char * EXPORT_Description(void)
{
    return "paxoskv";
}

void EXPORT_DylibInit(const char * conf_file)
{
    PaxosKVServiceImpl::BeforeServerStart(conf_file);
}

grpc::Service * EXPORT_GetGrpcServiceInstance(void)
{
    return &service;
}
void EXPORT_OnCoroutineWorkerStart(void)
{
    PaxosKVServiceImpl::SetInstance(new PaxosKVServiceImpl);
    PaxosKVServiceImpl::GetInstance()->BeforeWorkerStart();
} 
void EXPORT_OnWorkerThreadStart(grpc::ServerCompletionQueue *cq)
{
  // Bind handlers

    new GetHandler(&service, cq);
    new SetHandler(&service, cq);
    new DelHandler(&service, cq);
}
