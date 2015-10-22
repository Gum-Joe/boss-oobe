#include <node.h>
#include <direct.h>

namespace mkdir {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Mkdir(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  mkdir(getenv('HOME')+".web/tt");
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Done."));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "mkdir", Mkdir);
}

NODE_MODULE(addon, init)

}  // namespace demo
    int main()
    {
          mkdir("c:/myfolder");
          return 0;
    }
