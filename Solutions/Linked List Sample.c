#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;
NODE *newNode, *head=0, *temp=0;
void main() {
    int i=1, choice = 1;
    while(choice) {
        newNode = (NODE *)malloc(sizeof(NODE));
        printf("Enter the integer for node %d: ", i);
        scanf("%d", &newNode->data);
        if(head!=0) {
            printf("Moving pointer to next node....\n");
            temp->next = newNode;
            temp = newNode;
        }
        else {
            printf("Initiating Linked List....\n");
            head = temp = newNode;
        }
        printf("To create further nodes press 1 else press 0: ");
        scanf("%d", &choice);
        i++;
    }
    temp->next = NULL;

    NODE *t;
    t = head;
    while(t!=NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}
