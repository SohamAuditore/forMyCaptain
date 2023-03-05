#include <stdio.h>
int findLCM(int m, int n, int x) {
  if (m == 0 || n == 0) {
    return (m > n) ? m : n;
  } else {
    if ((n * x) % m == 0) {
      return n * x;
    } else {
      return findLCM(m, n, x + 1);
    }
  }
}

void main() {
  int m, n, y;
  printf("\nEnter two numbers: ");
  scanf("%d %d", &m, &n);
  if (m > n) {
    y = findLCM(m, n, 1);
  } else {
    y = findLCM(n, m, 1);
  }
  printf("\nThe LCM of the 2 numbers are: %d", y);
}