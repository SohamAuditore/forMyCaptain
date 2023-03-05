#include <stdio.h>
int sumOfDigits(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n % 10 + sumOfDigits(n / 10);
  }
}
void main() {
  int x;
  printf("\nEnter a number: ");
  scanf("%d", &x);
  int y;
  y = sumOfDigits(x);
  printf("\nThe sum of digits is %d", y);
}