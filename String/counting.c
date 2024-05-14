#include <stdio.h>

/* Counting chars */
int str_length(char *str);
int main() {
  char str[] = {"Hello, my name is john."};
  
  printf("%s <-- length: %d \n", str, str_length(str));

  return 0;
}

int str_length(char *str) {
  int i = 0;
  
  while(str[i]) {
    i++;
  }

  return i;
}
