/* Output */
#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("a.txt", "w");

  if (fp == NULL) {
    printf("Write Error! \n");
    return 0;
  }

  fputs("Hi World! \n", fp);
  fputs("Console test stdout \n", stdout);
  fclose(fp);

  return 0;
}
