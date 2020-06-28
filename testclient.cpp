#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include "PaxosKVServiceClient/PaxosKVServiceClient.hpp"
#include <coredeps/SatelliteClient.hpp>
#include <unistd.h>
#include <coredeps/ContextHelper.hpp>
#include <coredeps/MonitorClient.hpp>
std::atomic<uint64_t> success;
std::atomic<uint64_t> failed;
void run(int i)
{
  ServerContextHelper::SetInstance(new ServerContextHelper);
  std::string strIp;
  switch (i % 3)
  {
  case 0:
    strIp = "10.0.0.221:8901";
    break;
  case 1:
    strIp = "10.0.0.222:8901";
    break;
  case 2:
    strIp = "10.0.0.223:8901";
    break;
  }
  PaxosKVServiceClient oClient("10.0.0.221:8901");
  while (true)
  {
    paxoskv::SetReq oReq;
    paxoskv::SetResp oResp;
    oReq.set_key(std::to_string(i % 20));
    oReq.set_value("456");
    int iRet = oClient.Set(oReq, oResp);
    //std::cout << IdAllocatorServiceClient().AllocateId(oReq, oResp) << oResp.ShortDebugString() << std::endl;
    if (iRet != 0)
    {
      //std::cout << iRet << std::endl;
      failed++;
    }
    else
    {
      success++;
    }
  }
}
int main()
{
  MonitorClient::GetInstance()->SetMyID(1);
  MonitorClient::GetInstance()->SetServer("10.0.0.117:13876");
  //MonitorClient::GetInstance()->Start();
  SatelliteClient::GetInstance().SetServer("10.0.0.212:5553");
  std::vector<std::thread> vec;

  for (int i = 0; i < 5; i++)
  {
    auto a = std::thread([i]() -> void {
      run(i);
    });
    vec.push_back(std::move(a));
  }
  uint64_t before_success = 0;
  uint64_t before_failed = 0;
  while (true)
  {
    before_success = success;
    before_failed = failed;
    sleep(1);
    std::cout << "success:" << success - before_success << "qps failed:" << failed - before_failed << "qps" << std::endl;
  }
  for (auto &a : vec)
  {
    a.join();
  }
}
