#pragma once
#include <vector>
#include <string>
#include "kvclient.hpp"
class KVClients
{
public:
  KVClients(int size)
  {
    for (int i = 0; i < size; i++)
    {
      m_vecClients.push_back(new KVClient("/tmp/db/" + std::to_string(i)));
    }
    m_size = size;
  }
  uint32_t GetRoute(const std::string &strKey)
  {
    uint32_t sum = 0;
    for (char a : strKey)
    {
      sum = sum * 1007 + a;
    }
    return sum % m_size;
  }
  int Get(uint32_t routekey, const std::string &strKey, std::string &strValue)
  {
    return m_vecClients[routekey]->Get(strKey, strValue);
  }
  int Set(uint32_t routekey, const std::string &strKey, const std::string &strValue)
  {
    return m_vecClients[routekey]->Set(strKey, strValue);
  }
  int Del(uint32_t routekey, const std::string &strKey)
  {
    return m_vecClients[routekey]->Del(strKey);
  }
  int Get(const std::string &strKey, std::string &strValue)
  {
    uint32_t index = GetRoute(strKey);
    return Get(index, strKey, strValue);
  }
  int Set(const std::string &strKey, const std::string &strValue)
  {
    uint32_t index = GetRoute(strKey);
    return Set(index, strKey, strValue);
  }
  int Del(const std::string &strKey)
  {
    uint32_t index = GetRoute(strKey);
    return Del(index, strKey);
  }
  ~KVClients()
  {
    for (auto pClient : m_vecClients)
    {
      delete pClient;
    }
  }

private:
  int m_size;
  std::vector<KVClient *> m_vecClients;
};