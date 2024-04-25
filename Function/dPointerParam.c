#include <stdio.h>

/* Double pointer param */
int pswap(int **ppa, int **ppb);

int main() {
  int a, b;
  int *pa, *pb;

  pa = &a;
  pb = &b;

  printf("pa --pointing var--> %p \n", pa);
  printf("pa's address: %p \n\n", &pa);
  printf("pb --pointing var--> %p \n", pb);
  printf("pb's address: %p \n\n", &pb);

  printf("------called pswap function------\n");
  pswap(&pa, &pb);
  printf("------exit-----------------------\n");

  printf("pa --pointing var--> %p \n", pa);
  printf("pa's address: %p \n\n", &pa);
  printf("pb --pointing var--> %p \n", pb);
  printf("pb's address: %p \n\n", &pb);

  return 0;
}

int pswap(int **ppa, int **ppb) {
  printf("ppa --pointing var--> %p \n", ppa);
  printf("ppb --pointing var--> %p \n", ppb);

  int *temp = *ppa;
  *ppa = *ppb;
  *ppb = temp;

  return 0;
}
