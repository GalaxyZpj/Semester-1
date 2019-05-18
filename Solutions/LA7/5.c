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

int main() {
  int choice = 1;
  //char name = 
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



  return 0;
}
