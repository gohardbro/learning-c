/* fgets for input */
#include <stdio.h>

int main() {
  FILE *fp = fopen("a.txt", "r");
  char buf[20]; // Buffer
  
  if (fp == NULL) {
    printf("READ ERROR!!\n");
    return 0;
  }

  fgets(buf, 20, fp);
  printf("Input context: %s\n", buf);
  fclose(fp);
  
  return 0;
}
