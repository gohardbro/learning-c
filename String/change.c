#include <stdio.h>

/* Changing Strings */
int main() {
  char s[] = {"long sentence"};
  
  printf("before: %s \n", s);

  s[0] = 'a';
  s[1] = 'b';
  s[2] = 'c';
  s[3] = 'd';

  printf("after: %s \n", s);

  return 0;
}
