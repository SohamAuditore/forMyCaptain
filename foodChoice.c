#include <stdio.h>
void main() {
  int n;
  printf("\nEnter a number between 1 and 5 to see item and price: ");
  scanf("%d", &n);
  switch (n) {
  case 1: {
    printf("\nFood item - Pizza\nPrice - Rs 239");
    break;
  }
  case 2: {
    printf("\nFood item - Burger\nPrice - Rs 129");
    break;
  }
  case 3: {
    printf("\nFood item - Pasta\nPrice - Rs 179");
    break;
  }
  case 4: {
    printf("\nFood item - French Fries\nPrice - Rs 99");
    break;
  }
  case 5: {
    printf("\nFood item - Sandwich\nPrice - Rs 149");
    break;
  }
  default: {
    printf("\nYou have entered a Wrong Choice!");
  }
  }
}