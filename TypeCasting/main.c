#include <stdio.h>

int main() {
  float f;
  printf("float input : ");
  scanf("%f", &f);
  int i = (int) (f * 100) % 100;
  printf("i=%d\n", i);

  return 0;
}
