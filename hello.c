#include "types.h"
//#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(0, "hello world (to fd 0)\n");
  printf(1, "hello world (to fd 1)\n");
  exit();
}
