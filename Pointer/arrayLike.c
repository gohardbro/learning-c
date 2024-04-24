#include <stdio.h>

// 포인터에 덧셈을 이용해 배열과 똑같이 쓰기
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int* parr;
  parr = &arr[0];

  // index 3인 배열의 값과 첫번째배열을 가르키는 포인터에 +3 한것의 값은 같다.
  printf("arr[3] = %d, *(parr + 3) = %d \n", arr[3], *(parr + 3));
  return 0;
} 
