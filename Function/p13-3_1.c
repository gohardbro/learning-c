#include <stdio.h>

double average(double scores[], int length);
int sort(double arr[], int length);
int main() {
  double averScores[5];
  double scores[3];
  double totalAver;
  int averScoresSize = sizeof(averScores) / sizeof(averScores[0]);
  int length;

  for (int i=0; i<5; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter %dth student's %dth scores", i+1, j+1);
      scanf("%lf", &scores[j]);
    }

    length = sizeof(scores) / sizeof(scores[0]);
    averScores[i] = average(scores, length);
  }

  length = sizeof(averScores) / sizeof(averScores[0]);
  totalAver = average(averScores, length);
  
  sort(averScores, length);
  
  for (int i=0; i<averScoresSize; i++) {
    if (averScores[i] >= totalAver) {
      printf("%f, 합격!\n", averScores[i]);
    } else {
      printf("%f, 불합격!\n", averScores[i]);
    }
  }

  return 0;
}

double average(double scores[], int length) {
  double total = 0;

  for (int i=0; i<length; i++) {
    total += scores[i];
  }
  
  return total / length;
}

int sort(double arr[], int length) {
  // Bubble sort
  for (int i=0; i<length-1; i++) {
    for (int j=0; j<length-1-i; j++) {
      if (arr[j] < arr[j+1]) {
        double temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    } 
  }

  return 0;
}
