#include <stdio.h>
/* Union */
// union은 메모리를 공유한다.
union A {
  int i;
  char j;
};

int main() {
  union A a;
  a.i = 0x12345678;
  printf("%x", a.j);

  return 0;
}

