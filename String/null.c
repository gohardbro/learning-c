#include <stdio.h>

/* Null */
int main() {
  char null_1 = '\0'; // 이 세개는 모두 동일
  char null_2 = 0;
  char null_3 = (char)NULL; // 대문자로 써야함

  char not_null = '0';

  printf("NULL의 정수(아스키)값: %d, %d, %d \n", null_1, null_2, null_3);
  printf("'0'의 정수(아스키)값: %d \n", not_null);

  return 0;
}
