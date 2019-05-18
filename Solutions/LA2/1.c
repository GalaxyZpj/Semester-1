#include <stdio.h>

int sum(int *a, int *b) {
  int x;
  x = *a + *b;
  return(x);
}

int diff(int *a, int *b) {
  int x;
  x = *a - *b;
  return(x);
}

int mul(int *a, int *b) {
  int x;
  x = *a * *b;
  return(x);}
void menu() {
  printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
}
int main() {
  int choice, n1, n2;
  printf("Enter two numbers: ");
  scanf("%d, %d", &n1, &n2);

  printf("Choose among the following operation:-\n");
  menu();

  scanf("%d", &choice);

  switch(choice) {
    case 1:
    printf("The sum is %d.\n", sum(&n1, &n2));
    break;

    case 2:
    printf("The difference is %d.\n", diff(&n1, &n2));
    break;

    case 3:
    printf("The multiplied no. is %d.\n", mul(&n1, &n2));
    break;

    default:
    printf("Invalid choice.");
  }
  return 0;
}
