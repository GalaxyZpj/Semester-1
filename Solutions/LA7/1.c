#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}NODE;

NODE *newNode, *head = 0, *temp = 0, *s;

int main() {
  int size, i = 0, key, count = 0;
  printf("Enter the size of linked list: ");
  scanf("%d", &size);

  while(i < size) {
    newNode = (NODE *)malloc(sizeof(NODE));
    printf("\n--NODE %d--\n", i+1);
    printf("Enter the integer: ");
    scanf("%d", &newNode->data);
    if(head!=0) {
      printf("Moving temp pointer further...\n");
      temp->next = newNode;
      temp = newNode;
    }
    else {
      printf("Initializing Linked List...\n");
      head = temp = s = newNode;
    }
    i++;
  }
  temp->next = NULL;

  printf("\nLinked List created successfully.\n");

  printf("\nEnter the element to be searched: ");
  scanf("%d", &key);

  while(s->next != NULL) {
    if(s->data == key) {
      count++;
    }
    s = s->next;
    if(s->next == NULL) {
      if(s->data == key) {
        count++;
      }
    }
  }

  printf("\n%d occurs %d times in the linked list.\n", key, count);

  return 0;
}
