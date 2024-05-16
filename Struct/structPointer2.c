#include <stdio.h>
/* Struct pointer 2 */
struct TEST {
  int a;
};

int main() {
  struct TEST t;
  struct TEST *pt = &t;

  (*pt).a = 1;
  printf("t.a: %d \n", t.a);

  (*pt).a = 2;
  printf("t.a: %d \n", t.a);
 
  return 0;
}
