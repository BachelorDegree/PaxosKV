#include "SetHandler.hpp"
#include "PaxosKVServiceImpl.hpp"
void SetHandler::SetInterfaceName(void)
{
    interfaceName = "PaxosKVService.Set";
}

void SetHandler::Proceed(void)
{
    switch (status)
    {
    case Status::CREATE:
        this->SetStatusProcess();
        service->RequestSet(&ctx, &request, &responder, cq, cq, this);
        break;
    case Status::PROCESS:
    {
        // Firstly, spawn a new handler for next incoming RPC call
        new SetHandler(service, cq);
        this->BeforeProcess();
        // Implement your logic here
        int iRet = PaxosKVServiceImpl::GetInstance()->Set(request, response);
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

