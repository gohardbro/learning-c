#include <stdio.h>
/* Enum */
enum {RED, BLUE, WHITE, BLACK};

int main() {
  int palette = RED;
  
  switch(palette) {
    case RED:
      printf("It's RED \n");
      break;
    case BLUE:
      printf("It's BLUE \n");
      break;
    case WHITE:
      printf("It's WHITE \n");
      break;
    case BLACK:
      printf("It's BLACK \n");
      break;
  }
}
