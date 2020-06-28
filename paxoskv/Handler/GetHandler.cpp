#include "GetHandler.hpp"
#include "PaxosKVServiceImpl.hpp"
void GetHandler::SetInterfaceName(void)
{
    interfaceName = "PaxosKVService.Get";
}

void GetHandler::Proceed(void)
{
    switch (status)
    {
    case Status::CREATE:
        this->SetStatusProcess();
        service->RequestGet(&ctx, &request, &responder, cq, cq, this);
        break;
    case Status::PROCESS:
    {
        // Firstly, spawn a new handler for next incoming RPC call
        new GetHandler(service, cq);
        this->BeforeProcess();
        // Implement your logic here
        int iRet = PaxosKVServiceImpl::GetInstance()->Get(request, response);
        this->SetReturnCode(iRet);
        this->SetStatusFinish();
        responder.Finish(response, grpc::Status::OK, this);
        break;
    }
    case Status::FINISH:
        delete this;
        break;
    default:
        // throw exception
        ;
    }
}

