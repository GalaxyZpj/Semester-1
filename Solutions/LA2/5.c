#include <stdio.h>

struct complex{
  int real;
  int imag;
}c1, c2;

void sum(struct complex *p1, struct complex *p2) {
  printf("The complex no. is (%d) + i(%d).\n", p1->real + p2->real, p1->imag + p2->imag);
}

void diff(struct complex *p1, struct complex *p2) {
  printf("The complex no. is (%d) + i(%d).\n", p1->real - p2->real, p1->imag - p2->imag);
}

void mul(struct complex *p1, struct complex *p2) {

}

void div(struct complex *p1, struct complex *p2) {

}

void menu() {
  printf("Choose among the following operations:\n");
  printf("1. Addition\n");
  printf("2. Subtration\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("========Don't choose 3 and 4 for now, Broken!========\n");

}



int main() {
  int input;

  printf("Enter the real and imaginary part seperated by a comma: ");
  scanf("%d, %d", &c1.real, &c1.imag);
  printf("The first complex number is (%d) + i(%d)\n", c1.real, c1.imag);

  printf("Enter the real and imaginary part seperated by a comma: ");
  scanf("%d, %d", &c2.real, &c2.imag);
  printf("The second complex number is (%d) + i(%d)\n", c2.real, c2.imag);

  menu();
  scanf("%d", &input);

  switch(input) {
    case 1:
    sum(&c1, &c2);
    break;

    case 2:
    diff(&c1, &c2);
    break;

    case 3:
    mul(&c1, &c2);
    break;

    case 4:
    div(&c1, &c2);
    break;

    default:
    printf("Invalid choice.\n");
  }

  return 0;
}
