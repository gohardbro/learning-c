/* fseek */
#include <stdio.h>

int main() {
  FILE *fp = fopen("a.txt", "w");
  fputs("abc is the best!", fp);
  fseek(fp, 0, SEEK_SET);
  fputs("def", fp);

  return 0;
}
