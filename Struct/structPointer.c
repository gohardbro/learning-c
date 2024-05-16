#include <stdio.h>
/* Struct pointer */
struct test {
  int a, b;
};

int main() {
  struct test t;
  struct test *pt;

  pt = &t;

  pt->a = 1; // == (*pt).a = 1;
  pt->b = 2; // == (*pt).b = 2;

  printf("t.a: %d \n", t.a);
  printf("t.b: %d \n", t.b);

  return 0;
}
