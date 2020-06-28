#include "PaxosKVServiceImpl.hpp"
#include "Proto/kvsm.pb.h"
#include <paxoslib/proto/config.pb.h>

int PaxosKVServiceImpl::Get(const ::paxoskv::GetReq &oReq, ::paxoskv::GetResp &oResp)
{
    return g_pClients->Get(oReq.key(), *oResp.mutable_value());
}
int PaxosKVServiceImpl::Set(const ::paxoskv::SetReq &oReq, ::paxoskv::SetResp &oResp)
{
    kvsm::Request oKvReq;
    oKvReq.set_op(kvsm::Request_OpType_Put);
    oKvReq.set_value(oReq.value());
    oKvReq.set_key(oReq.key());
    uint32_t index = g_pClients->GetRoute(oReq.key());
    std::string req;
    oKvReq.SerializeToString(&req);
    std::lock_guard<std::mutex> oLock(g_vecMutex[index]);
    uint64_t id;
    return g_pNode->Propose(index, req, id);
}
int PaxosKVServiceImpl::Del(const ::paxoskv::DelReq &oReq, ::paxoskv::DelResp &oResp)
{
    kvsm::Request oKvReq;
    oKvReq.set_op(kvsm::Request_OpType_Del);
    oKvReq.set_key(oReq.key());
    uint32_t index = g_pClients->GetRoute(oReq.key());
    std::string req;
    oKvReq.SerializeToString(&req);
    std::lock_guard<std::mutex> oLock(g_vecMutex[index]);
    uint64_t id;
    return g_pNode->Propose(index, req, id);
}
paxoslib::Node *PaxosKVServiceImpl::g_pNode;
KVClients *PaxosKVServiceImpl::g_pClients;
std::mutex *PaxosKVServiceImpl::g_vecMutex;
int PaxosKVServiceImpl::BeforeServerStart(const char *czConf)
{
    g_vecMutex = new std::mutex[10];
    paxoslib::config::Config oConfig;
    {
        auto pPeer = oConfig.add_peers();
        pPeer->set_id(1);
        pPeer->set_ip("10.0.0.221");
        pPeer->set_port(10001);
    }
    {
        auto pPeer = oConfig.add_peers();
        pPeer->set_id(2);
        pPeer->set_ip("10.0.0.222");
        pPeer->set_port(10002);
    }
    {
        auto pPeer = oConfig.add_peers();
        pPeer->set_id(3);
        pPeer->set_ip("10.0.0.223");
        pPeer->set_port(10003);
    }
    oConfig.set_node_id(czConf[0] - '1' + 1);
    oConfig.set_port(10001);
    oConfig.set_paxoslog_dir("/tmp/paxos/");

    g_pNode = new paxoslib::Node(oConfig);
    g_pClients = new KVClients(10);
    KVSM *pKvsm = new KVSM(g_pClients);
    g_pNode->AddStateMachine(pKvsm);
    return g_pNode->Init();
}
int PaxosKVServiceImpl::BeforeWorkerStart()
{
    return 0;
}