#include <stdio.h>

int main() {
  int arr[2][3];
  int brr[5][3];
  int crr[2][5];

  int (*prr)[3]; // 크기가 3인 배열을 가르키는 포인터

  prr = arr; // ok
  prr = brr; // ok
  prr = crr; // error!!

  return 0;
}
