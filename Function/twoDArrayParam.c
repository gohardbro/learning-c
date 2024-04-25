#include <stdio.h>
/* 2차원 배열의 각 원소를 1씩 증가
 * 열의 개수가 2개인 이차원 배열과 총 행의 수를 인자로 받는다.*/
int add1_element(int (*arr)[2], int row);

int main() {
  int arr[3][2];

  for (int i=0; i<3; i++) {
    for (int j=0; j<2; j++) {
      printf("Enter value arr[%d][%d]: \n", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  add1_element(arr, 3);

  for (int i=0; i<3; i++) {
    for (int j=0; j<2; j++) {
      printf("arr[%d][%d] = %d \n", i, j, arr[i][j]);
    }
  }

  return 0;
}

int add1_element(int (*arr)[2], int row) {
  for (int i=0; i<row; i++) {
    for (int j=0; j<2; j++) {
      arr[i][j]++;
    }
  }

  return 0;
}
