#include "types.h"
#include "stat.h"
#include "user.h"

char buf[512];

void
null()
{
  int n;

  // read and throw away stdin
  while((n = read(0, buf, sizeof(buf))) > 0);

  if(n < 0){
    printf(1, "null: read error\n");
    exit();
  }
}

int
main(int argc, char *argv[])
{
  if(argc <= 1){
    null();
  } else {
    printf(2, "no args expected.\n");
  }

  exit();
}
