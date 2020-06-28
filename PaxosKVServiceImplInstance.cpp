#include <colib/co_routine_specific.h>
#include "PaxosKVServiceImpl.hpp"
struct __PaxosKVServiceImplWrapper{
    PaxosKVServiceImpl * pImpl;
};
CO_ROUTINE_SPECIFIC(__PaxosKVServiceImplWrapper, g_coPaxosKVServiceImplWrapper)
PaxosKVServiceImpl *PaxosKVServiceImpl::GetInstance()
{
    return g_coPaxosKVServiceImplWrapper->pImpl;
}
void PaxosKVServiceImpl::SetInstance(PaxosKVServiceImpl *pImpl)
{
    g_coPaxosKVServiceImplWrapper->pImpl = pImpl;
}
