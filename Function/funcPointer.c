#include <stdio.h>

/* Function Pointer */
int min(int a, int b);
int donothing(int a, int b);

int main() {
  int a, b;
  int (*pfunc)(int, int); // This is function pointer.
  pfunc = min;

  printf("Enter 2 numbers \n");
  scanf("%d %d", &a, &b);
  printf("min(a, b): %d \n", min(a, b));
  printf("pfunc(a, b): %d \n", pfunc(a, b));

  pfunc = donothing;

  printf("min(a, b): %d \n", donothing(a, b));
  printf("pfunc(a, b): %d \n", pfunc(a, b));

  return 0;
}

int min(int a, int b) {
  if (a > b) return b;
  return a;
}

int donothing(int a, int b) {return 0;}

// int increase(int (*arr)[3], int row);
// == int (*pfunc)(int (*)[3], int);
