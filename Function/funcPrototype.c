#include <stdio.h>
/* Function Prototype */
int main() {
  int swap(int *a, int *b);
  int i, j;
  i = 3;
  j = 8;

  printf("Before swap : i = %d, j = %d \n", i, j);
  swap(&i, &j);
  printf("After  swap : i = %d, j = %d \n", i, j);

  return 0;
}

int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;

  return 0;
}
