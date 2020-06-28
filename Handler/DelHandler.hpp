#pragma once

#include "AsyncRpcHandler.hpp"
#include "Proto/paxoskv.grpc.pb.h"

class DelHandler final : public AsyncRpcHandler
{
public:
    DelHandler(::paxoskv::PaxosKVService::AsyncService *service, grpc::ServerCompletionQueue *cq):
        AsyncRpcHandler(cq), service(service), responder(&ctx)
    {
        this->Proceed();
    }
    void Proceed(void) override;
    void SetInterfaceName(void) override;

private:
    ::paxoskv::PaxosKVService::AsyncService*                     service;
    ::paxoskv::DelReq                                    request;
    ::paxoskv::DelResp                                   response;
    grpc::ServerAsyncResponseWriter<::paxoskv::DelResp>  responder;
};
