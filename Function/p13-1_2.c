#include <stdio.h>
/* 13-1. ps2 */
int slave(int totalAsset, int todayIncome) {
  return totalAsset += todayIncome;
}

int main() {
  int totalAsset;
  int todayIncome;

  printf("Total asset: %d, Enter today's income: \n", totalAsset);
  scanf("%d", &todayIncome);

  printf("Complete input! Total asset: %d \n", slave(totalAsset, todayIncome));
  return 0;
}
