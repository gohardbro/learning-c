#include <stdio.h>

/* Add strings */
int addStr(char *dest, char *src);
int main() {
  char str1[100] = "hi my name is ";
  char str2[] = "Tom";

  printf("Before adding: %s \n", str1);
  addStr(str1, str2);
  printf("After adding: %s \n", str1);

  return 0;
}

int addStr(char *dest, char *src) {
  /* dest의 끝부분을 찾는다. */
  while (*dest) {
    dest++;
  }

  /* while문을 지나고 나면 dest는 dset 문자열의 NULL 문자를 가리키고 있게 된다. 
     이제 src의 문자열들을 dest의 NULL 문자 있는곳 부터 복사해넣는다. 
  */
  while (*src) {
    *dest = *src;
    src++;
    dest++;
  }

  // dest에 NULL 추가 (src에서 NULL이 추가 되지 않았으므로)
  *dest = '\0';

  return 0;
}
