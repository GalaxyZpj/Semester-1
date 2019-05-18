#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}NODE;

NODE *newNode, *head = 0, *temp = 0;
int choice = 1, e, count=0, p, m, max = 0;
int main() {
  while(choice) {
    count++;
    printf("\n---Creating a Node---\n");
    newNode = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter the element: ");
    scanf("%d", &e);
    if(head != 0) {
      temp->next = newNode;
      temp = newNode;
    }
    else {
      head = temp = newNode;
    }
    temp->data = e;
    printf("To add more nodes, hit 1 else 0: ");
    scanf("%d", &choice);
  }
  temp->next = NULL;

  printf("\n%d nodes were created.\n", count);

  count = 1;
  temp = head;
  int min = temp->data;
  while(temp->next != NULL) {
    //For Max
    if(temp->data > max) {
      max = temp->data;
      p = count;
    }
    //For min
    if(temp->data < min) {
      min = temp->data;
      m = count;
    }

    temp = temp->next;
    count++;

    if(temp->next == NULL) {
      if(temp->data > max) {
        max = temp->data;
        p = count;
      }
      if(temp->data < min) {
        min = temp->data;
        m = count;
      }
    }
  }

  printf("\nThe largest element is %d present on node no %d.\n", max, p);
  printf("The smallest element is %d present on node no %d.\n", min, m);

  return 0;
}
