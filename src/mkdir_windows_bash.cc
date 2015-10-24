#include <node.h>
#include <direct.h>
#include <stdlib.h>
#include <string.h>
#include "mkdir_windows_bash.h"

namespace mkdirbash {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Mkdir(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  mkdirs(".web");
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Done."));
}

void initbash(Local<Object> exports) {
  NODE_SET_METHOD(exports, "mkdir", Mkdir);
}

NODE_MODULE(mkdirbash, initbash)

}  // namespace demo
