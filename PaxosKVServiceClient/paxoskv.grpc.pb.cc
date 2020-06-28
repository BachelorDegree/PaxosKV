// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: paxoskv.proto

#include "paxoskv.pb.h"
#include "paxoskv.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace paxoskv {

static const char* PaxosKVService_method_names[] = {
  "/paxoskv.PaxosKVService/Get",
  "/paxoskv.PaxosKVService/Set",
  "/paxoskv.PaxosKVService/Del",
};

std::unique_ptr< PaxosKVService::Stub> PaxosKVService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PaxosKVService::Stub> stub(new PaxosKVService::Stub(channel));
  return stub;
}

PaxosKVService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Get_(PaxosKVService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Set_(PaxosKVService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Del_(PaxosKVService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PaxosKVService::Stub::Get(::grpc::ClientContext* context, const ::paxoskv::GetReq& request, ::paxoskv::GetResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Get_, context, request, response);
}

void PaxosKVService::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::paxoskv::GetReq* request, ::paxoskv::GetResp* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void PaxosKVService::Stub::experimental_async::Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::paxoskv::GetResp* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::paxoskv::GetResp>* PaxosKVService::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::paxoskv::GetReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::paxoskv::GetResp>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::paxoskv::GetResp>* PaxosKVService::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::paxoskv::GetReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::paxoskv::GetResp>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, false);
}

::grpc::Status PaxosKVService::Stub::Set(::grpc::ClientContext* context, const ::paxoskv::SetReq& request, ::paxoskv::SetResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Set_, context, request, response);
}

void PaxosKVService::Stub::experimental_async::Set(::grpc::ClientContext* context, const ::paxoskv::SetReq* request, ::paxoskv::SetResp* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Set_, context, request, response, std::move(f));
}

void PaxosKVService::Stub::experimental_async::Set(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::paxoskv::SetResp* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Set_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::paxoskv::SetResp>* PaxosKVService::Stub::AsyncSetRaw(::grpc::ClientContext* context, const ::paxoskv::SetReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::paxoskv::SetResp>::Create(channel_.get(), cq, rpcmethod_Set_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::paxoskv::SetResp>* PaxosKVService::Stub::PrepareAsyncSetRaw(::grpc::ClientContext* context, const ::paxoskv::SetReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::paxoskv::SetResp>::Create(channel_.get(), cq, rpcmethod_Set_, context, request, false);
}

::grpc::Status PaxosKVService::Stub::Del(::grpc::ClientContext* context, const ::paxoskv::DelReq& request, ::paxoskv::DelResp* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Del_, context, request, response);
}

void PaxosKVService::Stub::experimental_async::Del(::grpc::ClientContext* context, const ::paxoskv::DelReq* request, ::paxoskv::DelResp* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Del_, context, request, response, std::move(f));
}

void PaxosKVService::Stub::experimental_async::Del(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::paxoskv::DelResp* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Del_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::paxoskv::DelResp>* PaxosKVService::Stub::AsyncDelRaw(::grpc::ClientContext* context, const ::paxoskv::DelReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::paxoskv::DelResp>::Create(channel_.get(), cq, rpcmethod_Del_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::paxoskv::DelResp>* PaxosKVService::Stub::PrepareAsyncDelRaw(::grpc::ClientContext* context, const ::paxoskv::DelReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::paxoskv::DelResp>::Create(channel_.get(), cq, rpcmethod_Del_, context, request, false);
}

PaxosKVService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PaxosKVService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PaxosKVService::Service, ::paxoskv::GetReq, ::paxoskv::GetResp>(
          std::mem_fn(&PaxosKVService::Service::Get), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PaxosKVService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PaxosKVService::Service, ::paxoskv::SetReq, ::paxoskv::SetResp>(
          std::mem_fn(&PaxosKVService::Service::Set), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PaxosKVService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PaxosKVService::Service, ::paxoskv::DelReq, ::paxoskv::DelResp>(
          std::mem_fn(&PaxosKVService::Service::Del), this)));
}

PaxosKVService::Service::~Service() {
}

::grpc::Status PaxosKVService::Service::Get(::grpc::ServerContext* context, const ::paxoskv::GetReq* request, ::paxoskv::GetResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PaxosKVService::Service::Set(::grpc::ServerContext* context, const ::paxoskv::SetReq* request, ::paxoskv::SetResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PaxosKVService::Service::Del(::grpc::ServerContext* context, const ::paxoskv::DelReq* request, ::paxoskv::DelResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace paxoskv
