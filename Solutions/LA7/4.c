#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}NODE;

NODE *newNode, *head=0, *temp=0, *temp1=0;

void display() {
  temp = head;
  while(temp->next != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
    if(temp->next == NULL) printf("%d ", temp->data);
  }
}

void last_front() {
  temp = head;
  temp1 = head;
  while(temp->next->next != NULL) {
    temp1 = temp1->next;
    temp = temp->next;
  }
  temp = temp->next;

  temp1->next = NULL;
  temp->next = head;
  head = temp;
  printf("The new list is: ");
  display();
}

int main() {
  int choice = 1;
  while(choice) {
    newNode = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter the element: ");
    scanf("%d", &newNode->data);
    if(head != 0) {
      temp->next = newNode;
      temp = newNode;
    }
    else {
      head = temp = newNode;
    }
    printf("To add more nodes, hit 1 else 0: ");
    scanf("%d", &choice);
  }
  temp->next = NULL;

  display();

  printf("\nTo move the last element to front, press 1 else 0: ");
  scanf("%d", &choice);
  switch(choice) {
    case 1: last_front(); break;
    case 0: display(); break;
  }




  return 0;
}
