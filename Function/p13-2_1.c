#include <stdio.h>
/* 위 10 개의 원소들 중 최대값 구하는 함수를 이용하여, 
 * 10 개의 원소를 입력 받고 
 * 그 원소를 큰 순으로 출력하는 함수를 만들어보세요. */

int main() {
  int sort(int *parr);
  int arr[10];
  
  for (int i=0; i<10; i++) {
    printf("Enter arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  sort(arr);
  printf("---------Result-------- \n");

  for (int i=0; i<10; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}

int sort(int *parr) {
  // Bubble sort
  for (int i=0; i<9; i++) {
    for (int j=0; j<9-i; j++) {
      if (parr[j] < parr[j+1]) {
        int max = parr[j+1];
        parr[j+1] = parr[j];
        parr[j] = max;
      }
    }
  }

  return 0;
}
