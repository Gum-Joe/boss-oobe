#include <node.h>
#include <direct.h>
#include <stdlib.h>
#include <string.h>

namespace mkdirp {
  char *env = getenv("HOME");
  const char *dir = "/web";
  const char *home = strcat(env, dir);
}
