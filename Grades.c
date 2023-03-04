#include <stdio.h>
int main() {
  int n;
  printf("\nEnter marks of students: ");
  scanf("%d", &n);
  if (n >= 85 && n <= 100) {
    printf("\nGrade A");
  } else if (n >= 70 && n <= 84) {
    printf("\nGrade B");
  } else if (n >= 55 && n <= 69) {
    printf("\nGrade C");
  } else if (n >= 40 && n <= 54) {
    printf("\nGrade D");
  } else {
    printf("\nGrade F");
  }
  return 0;
}