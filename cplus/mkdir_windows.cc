#include <node.h>
#include <direct.h>
#include <stdlib.h>
#include <string.h>
//#include "mkdir-windows.h"

namespace mkdirp {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Mkdir(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  const char *env = getenv("HOMEPATH");
  char *drive = getenv("SystemDrive");
  const char *dir = "/web";
  char *homedir = strcat(drive, env);
  const char *home = strcat(homedir, dir);
  mkdir(home);
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Done."));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "mkdir", Mkdir);
}

NODE_MODULE(addon, init)

}  // namespace demo
