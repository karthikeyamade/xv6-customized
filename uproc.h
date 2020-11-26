#include "types.h"

struct uproc{
  char name[16];
  int pid;
  int ppid;
  uint sz;
  int state;
  int wait;
  int killed;
};
