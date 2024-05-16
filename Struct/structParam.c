#include <stdio.h>
/* Struct parameter */
struct TEST {
  int a;
  int b;
};

int setT(struct TEST *t, int a, int b);
int main() {
  struct TEST t;
  setT(&t, 1, 3);
  printf("t.a: %d, t.b: %d \n", t.a, t.b);

  return 0;
}

int setT(struct TEST *t, int a, int b) {
  t->a = a; // == (*t).a = a;
  t->b = b; // == (*t).b = b;

  return 0;
}
