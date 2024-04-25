#include <stdio.h>

/* Const param */
int replaceVal(const int val);

int main() {
  int num;
  scanf("%d", &num);
  replaceVal(num);

  return 0;
}

int replaceVal(const int val) {
  val = 2; // Not allowed
  return 0;
}
