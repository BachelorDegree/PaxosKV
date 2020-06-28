#pragma once

#include "AsyncRpcHandler.hpp"
#include "Proto/paxoskv.grpc.pb.h"

class SetHandler final : public AsyncRpcHandler
{
public:
    SetHandler(::paxoskv::PaxosKVService::AsyncService *service, grpc::ServerCompletionQueue *cq):
        AsyncRpcHandler(cq), service(service), responder(&ctx)
    {
        this->Proceed();
    }
    void Proceed(void) override;
    void SetInterfaceName(void) override;

private:
    ::paxoskv::PaxosKVService::AsyncService*                     service;
    ::paxoskv::SetReq                                    request;
    ::paxoskv::SetResp                                   response;
    grpc::ServerAsyncResponseWriter<::paxoskv::SetResp>  responder;
};
