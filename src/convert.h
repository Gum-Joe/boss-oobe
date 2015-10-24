#include <node.h>
#include <stdlib.h>
#include <string>
#include <iostream>

namespace convert {
  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Object;
  using v8::String;
  using v8::Value;

  const char *convertToStringV8(v8::Local<v8::Value> a) {
    /* code */
    v8::String::Utf8Value param1(a->ToString());
      // convert it to string
    std::string foo = std::string(*param1);
    const char *dir = foo.c_str();
    return dir;
  }

} /* mkdirp */
