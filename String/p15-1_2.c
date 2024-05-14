#include <stdio.h>

/* 15-2 problem 2*/
int main() {
  char str_a[] = "ab";
  char str_b[] = "ab";

  // str_a == str_a[0] == *str_a
  // if문에서 배열의 이름은 곧 배열의 첫번째주소값 이고
  // a, b 비교했을때 당연히 주소값이 다르기때문에 둘은 다르다.
  if (str_a == str_b) {
    printf("%s == %s \n", str_a, str_b);
  } else {
    printf("%s != %s \n", str_a, str_b);
  }
  
  printf("-----------------------\n");
  // 문자열 비교
  // 컴파일러가 Text영역에 같은 리터럴값이 존재하면
  // 해당 리터럴 값으로 대치하도록 최적화되어있다. (불명확)
  const char *str_c = "abcde";
  const char *str_d = "abcde";

  if (str_c == str_d) {
    printf("%s == %s \n", str_a, str_b);
  } else {
    printf("%s != %s \n", str_a, str_b);
  }
  

  return 0;
}
