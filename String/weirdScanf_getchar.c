#include <stdio.h>

/* getchar() */
int main() {
  int num;
  char c;

  printf("Input number: ");
  scanf("%d", &num);

  // Read a char
  getchar();

  printf("Input char: ");
  scanf("%c", &c);

  return 0;
}
