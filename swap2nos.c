#include <stdio.h>
void main() {
  int a, b;
  printf("\nEnter two numbers: ");
  scanf("%d %d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("\nAfter swapping the values of a and b are: %d and %d", a, b);
}