#include <stdio.h>
/* Compare strings */
int compareStr(char *str, char *str2);
int main() {
  char str[] = "abc";
  char str2[] = "abc";
  char str3[] = "def";
  char str4[] = "ghi";

  if (compareStr(str, str2)) {
    printf("%s , %s : same \n", str, str2);
  } else {
    printf("%s , %s : diff \n", str, str2);
  }

  if (compareStr(str3, str4)) {
    printf("%s , %s : same \n", str3, str4);
  } else {
    printf("%s , %s : diff \n", str3, str4);
  }

  return 0;
}

int compareStr(char *str, char *str2) {
  while (*str) {
    if (*str != *str2) {
      return 0;
    }

    str++;
    str2++;
  }

  if (*str2 == '\0') return 1;

  return 0;

}
