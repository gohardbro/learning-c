#include <stdio.h>

/* 문자열의 시작 */
int main() {
  char s_1[4] = {'K', 'o', 'r', '\0'};
  char s_2[4] = {'K', 'o', 'r', 0};
  char s_3[4] = {'K', 'o', 'r', (char)NULL};
  char s_4[4] = {"Kor"};

  printf("s_1: %s \n", s_1); // %s : print string
  printf("s_2: %s \n", s_2);
  printf("s_3: %s \n", s_3);
  printf("s_4: %s \n", s_4);

  return 0;
}
