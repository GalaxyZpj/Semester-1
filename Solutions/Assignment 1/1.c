#include <stdio.h>
#include <stdlib.h>
int x=0, arr[100];
typedef struct poly {
  int coff;
  int pow;
  struct poly *next;
}NODE1, NODE2, NODEm;
NODE1 *newNode1, *head1=0, *temp1=0;
NODE2 *newNode2, *head2=0, *temp2=0;


void dis_poly1() {
  temp1 = head1;
  printf("The polynomial is: ");
  while(temp1->next != NULL) {
    if(temp1->coff == 1) {
      if(temp1->pow == 0) {
        printf("%d", temp1->coff);
      }
      else {
        printf("x^%d", temp1->pow);
      }
    }
    else {
      if(temp1->pow == 0) {
        printf("%d", temp1->coff);
      }
      else {
        printf("%dx^%d", temp1->coff, temp1->pow);
      }
    }
    printf(" + ");
    temp1 = temp1->next;
  }

  if(temp1->coff == 1) {
    if(temp1->pow == 0) {
      printf("%d", temp1->coff);
    }
    else {
      printf("x^%d", temp1->pow);
    }
  }
  else {
    if(temp1->pow == 0) {
      printf("%d", temp1->coff);
    }
    else {
      printf("%dx^%d", temp1->coff, temp1->pow);
    }
  }
}

void dis_poly2() {
  temp2 = head2;
  printf("The polynomial is: ");
  while(temp2->next != NULL) {
    if(temp2->coff == 1) {
      if(temp2->pow == 0) {
        printf("%d", temp2->coff);
      }
      else {
        printf("x^%d", temp2->pow);
      }
    }
    else {
      if(temp2->pow == 0) {
        printf("%d", temp2->coff);
      }
      else {
        printf("%dx^%d", temp2->coff, temp2->pow);
      }
    }
    printf(" + ");
    temp2 = temp2->next;
  }

  if(temp2->coff == 1) {
    if(temp2->pow == 0) {
      printf("%d", temp2->coff);
    }
    else {
      printf("x^%d", temp2->pow);
    }
  }
  else {
    if(temp2->pow == 0) {
      printf("%d", temp2->coff);
    }
    else {
      printf("%dx^%d", temp2->coff, temp2->pow);
    }
  }
}

void asc_disp() {
  temp1 = head1; temp2 = head2;
  int t;
  for(int i=0; i<x; i++) {
    for(int j=i; j<x; j++) {
      if(arr[i]>arr[j]) {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
      }
    }
  }
  printf("\nThe coefficents in ascending order are: ");
  for(int k=0; k<x; k++) {
    printf("%d ", arr[k]);
  }
  printf("\n");
}

int main() {
  int choice = 1;
  printf("\n-----Storing Polynomial 1-----\n");
  while(choice) {
    newNode1 = (NODE1 *)malloc(sizeof(NODE1));
    printf("Enter power of x: ");
    scanf("%d", &newNode1->pow);
    printf("Enter its coefficient: ");
    scanf("%d", &newNode1->coff);
    arr[x] = newNode1->coff;
    x++;
    if(head1 != 0) {
      temp1->next = newNode1;
      temp1 = newNode1;
    }
    else {
      head1 = temp1 = newNode1;
    }
    printf("To enter further terms press 1 else 0: ");
    scanf("%d", &choice);
  }
  temp1->next = NULL;

  dis_poly1();

  choice = 1;
  printf("\n\n-----Storing Polynomial 2-----\n");
  while(choice) {
    newNode2 = (NODE2 *)malloc(sizeof(NODE2));
    printf("Enter power of x: ");
    scanf("%d", &newNode2->pow);
    printf("Enter its coefficient: ");
    scanf("%d", &newNode2->coff);
    arr[x] = newNode2->coff;
    x++;
    if(head2 != 0) {
      temp2->next = newNode2;
      temp2 = newNode2;
    }
    else {
      head2 = temp2 = newNode2;
    }
    printf("To enter further terms press 1 else 0: ");
    scanf("%d", &choice);
  }
  temp2->next = NULL;
  dis_poly2();
  printf("\n");

  asc_disp();

  return 0;
}
