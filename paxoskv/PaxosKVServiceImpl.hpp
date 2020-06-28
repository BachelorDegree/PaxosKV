#pragma once
#include "Proto/paxoskv.pb.h"
class PaxosKVServiceImpl
{
public:
    static PaxosKVServiceImpl *GetInstance();
    static void SetInstance(PaxosKVServiceImpl *);
    static int BeforeServerStart(const char * czConf) {
        return 0;
    }
    int BeforeWorkerStart() {
        return 0;
    }
    int Get(const ::paxoskv::GetReq & oReq, ::paxoskv::GetResp & oResp);
    int Set(const ::paxoskv::SetReq & oReq, ::paxoskv::SetResp & oResp);
    int Del(const ::paxoskv::DelReq & oReq, ::paxoskv::DelResp & oResp);
};
