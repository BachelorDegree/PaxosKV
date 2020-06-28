#include "DelHandler.hpp"
#include "PaxosKVServiceImpl.hpp"
void DelHandler::SetInterfaceName(void)
{
    interfaceName = "PaxosKVService.Del";
}

void DelHandler::Proceed(void)
{
    switch (status)
    {
    case Status::CREATE:
        this->SetStatusProcess();
        service->RequestDel(&ctx, &request, &responder, cq, cq, this);
        break;
    case Status::PROCESS:
    {
        // Firstly, spawn a new handler for next incoming RPC call
        new DelHandler(service, cq);
        this->BeforeProcess();
        // Implement your logic here
        int iRet = PaxosKVServiceImpl::GetInstance()->Del(request, response);
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

