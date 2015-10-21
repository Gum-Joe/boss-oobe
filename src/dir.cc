// EXPORT module (see docs)
// Module for directories

#include <node.h>
#include <direct.h>
//#include "mkdir.h"

namespace web {
  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Object;
  using v8::String;
  using v8::Value;
  
  void Mkdiro(const FunctionCallbackInfo<Value>& args) {
    if (args.Length() < 1) {
    isolate->ThrowException(Exception::TypeError(
        String::NewFromUtf8(isolate, "Wrong number of arguments")));
    return;
  } else {
    mkdir("c:/web");
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Dir created"));
  }
  }

  void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "mkdir", Mkdiro);
  }

  NODE_MODULE(addon, init)
} /* web */
