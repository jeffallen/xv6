#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  if(argc < 1){
    printf(2, "usage: share dummy\n");
    exit();
  }

  if (argv[1][0] == 'd') {
    char *sh;
    // first exec
    argv[1][0] = ' ';
    sh = (char *)shared();
    printf(2, "sh is %x\n", sh);
    strcpy(sh, "Hello World!");
    exec(argv[0], argv);
  } else {
    // second exec
    char *sh = (char *)shared();
    printf(2, "sh is %x\n", sh);
    printf(1, "shared mem has: %s\n", sh);
  }
  exit();
}
