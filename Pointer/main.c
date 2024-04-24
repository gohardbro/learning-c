#include <stdio.h>

int main() {
  int a = 2;
  printf("%p \n", &a);

  int *p;
  int b;

  // *a : a에 저장된 주소에 해당하는 데이터
  // &a : a의 주소
  p = &b;
  *p = 7;
  printf("b = %d\n", b);
  printf("*p = %d\n", *p);
  return 0;
}
