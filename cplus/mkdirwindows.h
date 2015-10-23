#include <node.h>
#include <direct.h>
#include <stdlib.h>
#include <string.h>

namespace mkdirp {
  const char *env = getenv("USERHOME");
  char *drive = getenv("Systemdrive");
  const char *dir = "/web";
  char *homedir = strcat(drive, env);
  const char *home = strcat(homedir, dir);
}
