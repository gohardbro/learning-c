#include <stdio.h>
/* Initialize member var */
struct Human {
  int age;
  int height;
  int weight;
  int gender;
} adam = {30, 177, 90, 0}, eve = {21, 169, 50, 1};
int printStatus(struct Human human);

int main() {
  // struct Human adam = {30, 177, 90, 0};
  // struct Human eve = {21, 169, 50, 1};

  printStatus(adam);
  printStatus(eve);

  return 0;
}

int printStatus(struct Human human) {
  if (human.gender == 0) {
    printf("Gender: male \n");
  } else { 
    printf("Gender: female \n");
  }

  printf("Age: %d / Height: %d / Weight: %d \n", human.age, human.height, human.weight);
  printf("-----------------------------------\n");

  return 0;
}
