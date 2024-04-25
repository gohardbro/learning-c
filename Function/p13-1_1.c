#include <stdio.h>

/* 13-1. problem-1 */

int magicBox(int num) {
  return num += 4;
}

int main() {
  int num = 36;
  int result = magicBox(num);
  printf("result = %d\n", result);
  return 0; 
}
