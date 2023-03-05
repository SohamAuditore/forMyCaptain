#include <stdio.h>
int isPrime(int n, int m) {
  if (m == 1) {
    return 1;
  } else {
    if (n % m == 0) {
      return 0;
    } else {
      return isPrime(n, m - 1);
    }
  }
}

void main() {
  int n, y;
  printf("\nEnter a number: ");
  scanf("%d", &n);
  y = isPrime(n, n / 2);
  if (y == 1) {
    printf("\nEntered number is prime!");
  } else {
    printf("\nEntered number is not prime!");
  }
}