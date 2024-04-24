#include <stdio.h>
// 포인터에 덧셈을해서 배열의 원소를 가르키게 하는 test
int main() {
  int arr[10];

  for (int i=0; i<10; i++) {
    arr[0] = i+1;
  }

  // 포인터에 +1을 한다면 해당 포인터의 자료형만큼 더해진다.
  // int 라면 4byte 만큼이니깐 더한뒤 주소값을 확인해보면 4씩 증가해있을것
  int* parr;
  parr = &arr[0];

  for (int i=0; i<10; i++) {
    printf("arr[%d]의 주소값 : %p ,", i, &arr[i]);
    printf("(parr + %d)의 값 : %p ", i, parr + i);

    if (&arr[i] == (parr + i)) {
      printf(" --> 일치 \n");
    } else {
      printf(" --> 불일치 \n");
    }
  }

  return 0;
}
