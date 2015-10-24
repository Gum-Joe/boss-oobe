#include <node.h>
#include <direct.h>
#include <stdlib.h>
#include <string>
#include <iostream>
//#include <string.h>
#include "mkdir_windows_bash.h"
#include "convert.h"

namespace mkdirbash {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;
using convert::convertToStringV8;

void Mkdir(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  const char *dir = convert::convertToStringV8(args[0]);
  mkdirs(dir);
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Done."));
}

void initbash(Local<Object> exports) {
  NODE_SET_METHOD(exports, "mkdir", Mkdir);
}

NODE_MODULE(mkdirbash, initbash)

}  // namespace demo
