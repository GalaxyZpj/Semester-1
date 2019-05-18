#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}NODE;

NODE *newNode, *head = 0, *temp = 0, *temp1 = 0;

void display() {
  temp = head;
  while(temp->next != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
    if(temp->next == NULL) printf("%d ", temp->data);
  }
}

void ins_start(int x) {
  temp = head;
  newNode = (NODE *)malloc(sizeof(NODE));
  newNode->data = x;
  newNode->next = temp;
  head = newNode;
  printf("The new  list is:-\n");
  display();
}

void ins_end(int x) {
  while(temp->next != NULL) {
    temp = temp->next;
  }
  if(temp->next == NULL) {
    newNode = (NODE *)malloc(sizeof(NODE));
    newNode->data = x;
    temp->next = newNode;
    newNode->next = NULL;
    printf("The new  list is:-\n");
    display();
  }
}

void ins_specific(int x) {
  int key;
  temp = head;
  temp1 = head;
  printf("Enter the element after which a new node is to be created: ");
  scanf("%d", &key);
  while(temp->next != NULL) {
    if(temp->data == key) {
      newNode = (NODE *)malloc(sizeof(NODE));
      newNode->data = x;
      temp1 = temp1->next;
      newNode->next = temp1;
      temp->next = newNode;
      break;
    }
    else {
      temp = temp->next;
      temp1 = temp1->next;
    }
    if(temp->next == NULL) {
      if(temp->data == key) {
        newNode = (NODE *)malloc(sizeof(NODE));
        newNode->data = x;
        temp1 = temp1->next;
        newNode->next = temp1;
        temp->next = newNode;
        break;
      }
      else {
        printf("The element was not found in the list.\n");
      }
    }
  }
  temp = head;
  printf("The new  list is:-\n");
  display();
}

void menu() {
  printf("\n-----Menu-----\n");
  printf("1. Insert at the beginning of the list\n");
  printf("2. Insert at the end of the list\n");
  printf("3. Insert after a specific element in the list\n");
}

int main() {
  int element, choice=1;

  printf("Creating a linked list...\n");
  while(choice) {
    newNode = (NODE *)malloc(sizeof(NODE));
    printf("Enter the element: ");
    int e;
    scanf("%d", &e);
    if(head != 0) {
      temp->next = newNode;
      temp = newNode;
    }
    else {
      head = temp = newNode;
    }
    temp->data = e;
    printf("To further create nodes press 1 else o: ");
    scanf("%d", &choice);
  }
  temp->next = NULL;
  printf("The list created is as follows:-\n");
  display();
  while(1) {
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &element);
    menu();
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
      case 1: ins_start(element); break;
      case 2: ins_end(element); break;
      case 3: ins_specific(element); break;
      default: printf("Invalid Selection...Program will quit.\n"); exit(0);
    }
  }
  return 0;
}
