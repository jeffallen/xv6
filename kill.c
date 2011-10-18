#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  int i;

  if(argc < 1){
    printf(2, "usage: kill pid...\n");
    exit();
  }
  for(i=1; i<argc; i++) {
    int pid = atoi(argv[i]);
    int res = kill(pid);
    if (res < 0) {
      printf(2, "kill: process %d not found\n", pid);
    }
  }
  exit();
}
