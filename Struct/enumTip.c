#include <stdio.h>
/* Enum Tip */
// 컴파일러는 enum의 첫 원소를 0으로 지정하고 차례로 증가하는 값을 매겨준다.
// 원소에 임의로 정수값을 지정하면 그 값부터 차례로 증가한다.
enum {RED = 3, BLUE, WHITE, BLACK};

int main() {
  int val = BLACK;
  printf("enum BLACK's value: %d \n", val);

  return 0;
}
