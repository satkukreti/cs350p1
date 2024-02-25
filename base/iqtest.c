#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
  if(argc < 2){
    printf(1, "Please provide your name\n");
    exit();
  }
  iqtest(argv[1]);
  exit();
}
