// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protocrepo/locationservice.proto

#include "protocrepo/locationservice.pb.h"
#include "protocrepo/locationservice.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* RouteGuide_method_names[] = {
  "/RouteGuide/ConvertPoint",
};

std::unique_ptr< RouteGuide::Stub> RouteGuide::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RouteGuide::Stub> stub(new RouteGuide::Stub(channel));
  return stub;
}

RouteGuide::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ConvertPoint_(RouteGuide_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RouteGuide::Stub::ConvertPoint(::grpc::ClientContext* context, const ::Point& request, ::Point* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ConvertPoint_, context, request, response);
}

void RouteGuide::Stub::experimental_async::ConvertPoint(::grpc::ClientContext* context, const ::Point* request, ::Point* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ConvertPoint_, context, request, response, std::move(f));
}

void RouteGuide::Stub::experimental_async::ConvertPoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Point* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ConvertPoint_, context, request, response, std::move(f));
}

void RouteGuide::Stub::experimental_async::ConvertPoint(::grpc::ClientContext* context, const ::Point* request, ::Point* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ConvertPoint_, context, request, response, reactor);
}

void RouteGuide::Stub::experimental_async::ConvertPoint(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Point* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ConvertPoint_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Point>* RouteGuide::Stub::AsyncConvertPointRaw(::grpc::ClientContext* context, const ::Point& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Point>::Create(channel_.get(), cq, rpcmethod_ConvertPoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Point>* RouteGuide::Stub::PrepareAsyncConvertPointRaw(::grpc::ClientContext* context, const ::Point& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::Point>::Create(channel_.get(), cq, rpcmethod_ConvertPoint_, context, request, false);
}

RouteGuide::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RouteGuide_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RouteGuide::Service, ::Point, ::Point>(
          [](RouteGuide::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::Point* req,
             ::Point* resp) {
               return service->ConvertPoint(ctx, req, resp);
             }, this)));
}

RouteGuide::Service::~Service() {
}

::grpc::Status RouteGuide::Service::ConvertPoint(::grpc::ServerContext* context, const ::Point* request, ::Point* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

