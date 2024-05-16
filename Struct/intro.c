#include <stdio.h>
#include <string.h> // for using string func
/* Struct instroduction */
struct Human {
  int age;
  int height;
  int weight;
  char sex[6];
};

int main() {
  struct Human tom;
  tom.age = 30;
  tom.height = 180;
  tom.weight = 93;
  strcpy(tom.sex, "male");

  printf("Tom's age: %d \n", tom.age);
  printf("Tom's height: %d \n", tom.height);
  printf("Tom's weight: %d \n", tom.weight);
  printf("Tom's sex: %s \n", tom.sex);

  return 0;
}
