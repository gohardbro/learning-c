#include <stdio.h>

/* Copy String */
int copyStr(char *dest, char *src);
int main() {
  char str1[] = "hello";
  char str2[] = "hi";

  printf("Before copying: %s \n", str1);
  copyStr(str1, str2);
  printf("After copying: %s \n", str1);

  return 0;
}

int copyStr(char *dest, char *src) {
  while (*src) {
    *dest = *src;
    src++;
    dest++;
  }

  *dest = '\0';

  return 0;
}
