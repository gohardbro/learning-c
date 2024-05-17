#include <stdio.h>
/* Define struct variable */

struct obj {
  char name[20];
  int x, y;
} Ball; // struct variable

char copyStr(char *dest, char *src);
int printObjStatus(struct obj obj);

int main() {
  Ball.x = 3;
  Ball.y = 4;
  copyStr(Ball.name, "Black Ball");
  printObjStatus(Ball);

  return 0;
}

int printObjStatus(struct obj obj) {
  printf("Location of %s \n", obj.name);
  printf("(%d, %d) \n", obj.x, obj.y);

  return 0;
}

char copyStr(char *dest, char *src) {
  while (*src) {
    *dest = *src;
    *src++;
    *dest++;
  }

  *dest = '\0';

  return 1;
}
