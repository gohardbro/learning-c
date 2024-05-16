#include <stdio.h>

/* sentence2 */
int main() {
  char str[] = "hallo";
  char *pstr = "goodbye";

  str[1] = 'a';
  //pstr[1] = 'a'; // error

  return 0;
}
