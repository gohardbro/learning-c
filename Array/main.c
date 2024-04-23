#include <stdio.h>

int main() {
  int total = 5;
  int arr[total];

  for (int i = 0; i < total; i++) {
    arr[i] = i+1;
  }

  for (int i = 0; i < total; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  // C 에서는 다차원배열 맨앞크기를 제외한 나머지크기는 정확히 지정해줘야함
  // int arr[2][] = {{1, 2, 3}, {4, 5, 6}}; // 그래서 이건 오류
  int darr[][3] = {{1, 2, 3}, {4, 5, 6}}; // 문제없이 작동
  return 0;
}
