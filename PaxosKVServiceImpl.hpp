#pragma once
#include "Proto/paxoskv.pb.h"
#include "paxoslib/node.hpp"
#include "kvclients.hpp"
#include "kvsm.hpp"
#include <vector>
#include <mutex>
class PaxosKVServiceImpl
{
public:
    static PaxosKVServiceImpl *GetInstance();
    static void SetInstance(PaxosKVServiceImpl *);
    static int BeforeServerStart(const char *czConf);
    int BeforeWorkerStart();
    int Get(const ::paxoskv::GetReq &oReq, ::paxoskv::GetResp &oResp);
    int Set(const ::paxoskv::SetReq &oReq, ::paxoskv::SetResp &oResp);
    int Del(const ::paxoskv::DelReq &oReq, ::paxoskv::DelResp &oResp);

private:
    static paxoslib::Node *g_pNode;
    static KVClients *g_pClients;
    static std::mutex *g_vecMutex;
};
