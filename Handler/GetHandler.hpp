#pragma once

#include "AsyncRpcHandler.hpp"
#include "Proto/paxoskv.grpc.pb.h"

class GetHandler final : public AsyncRpcHandler
{
public:
    GetHandler(::paxoskv::PaxosKVService::AsyncService *service, grpc::ServerCompletionQueue *cq):
        AsyncRpcHandler(cq), service(service), responder(&ctx)
    {
        this->Proceed();
    }
    void Proceed(void) override;
    void SetInterfaceName(void) override;

private:
    ::paxoskv::PaxosKVService::AsyncService*                     service;
    ::paxoskv::GetReq                                    request;
    ::paxoskv::GetResp                                   response;
    grpc::ServerAsyncResponseWriter<::paxoskv::GetResp>  responder;
};
