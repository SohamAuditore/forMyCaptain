#include <stdio.h>
void main() {
  printf("\nEnter the number of rows and columns: ");
  int i, j, m, n;
  scanf("%d %d", &i, &j);
  int a[i][j];
  printf("\nEnter %d elements: ", i * j);
  for (m = 0; m < i; m++) {
    for (n = 0; n < j; n++) {
      scanf("%d", &a[m][n]);
    }
  }
  for (m = 0; m < i; m++) {
    for (n = 0; n < j; n++) {
      printf("%d ", a[m][n]);
    }
    printf("\n");
  }
}