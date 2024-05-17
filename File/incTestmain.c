#include <stdio.h>
#include "incTestHeader.h"
/* Include test main */
int main() {
  char str1[20];
  char str2[20];

  scanf("%s", str1);
  scanf("%s", str2);

  if (compare(str1, str2)) {
    printf("%s == %s \n", str1, str2);
  } else {
    printf("%s != %s \n", str1, str2);
  }

  return 0;
}
