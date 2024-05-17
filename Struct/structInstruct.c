#include <stdio.h>
/* Struct in struct */
struct student {
  int age;
  int height;
};

struct school {
  struct student student;
  int id;
};

int main() {
  struct school school;

  school.student.age = 30;
  school.student.height = 190;

  printf("school.student.age: %d \n", school.student.age);
  printf("school.student.height: %d \n", school.student.height);

  return 0;
}
