#include <stdio.h>
/* Struct return function */
struct AA function(int j);
struct AA {
  int i;
};

int main() {
  struct AA a;
  a = function(10);
  printf("a.i: %d \n", a.i);

  return 0;
}

struct AA function(int i) {
  struct AA a;
  a.i = i;

  return a;
}
