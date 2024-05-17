/* #ifdef */
#include <stdio.h>
#define A

int main() {
  #ifdef A
  printf("AA \n");
  #endif 

  #ifdef B
  printf("BB \n");
  #endif  
  return 0;
}
