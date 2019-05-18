#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n 10
char stack[n][20];
int top = -1;

void push() {
  if(top == 9) {printf("Stack is full.");}
  else {
    top++;
    printf("Enter the string: ");
    scanf("%s", stack[top]);
    printf("Insertion successful.");
  }
}

void pop() {
  if(top == -1) {
    printf("Stack is empty.");
  }
  else {
    printf("Deleted '%s'.", stack[top]);
    top--;
  }
}

void display() {
  for(int i=top; i>=0; i--) {
    printf("%s ", stack[i]);
  }
}

void menu() {
  printf("\n----------Stack Menu----------\n");
  printf("1. Push\n");
  printf("2. Pop\n");
  printf("3. Display\n");
  printf("4. Exit loop and continue operation\n");
}

void operation() {
  FILE *p = fopen("/Users/pranavjain/Creative Cloud Files/Thu 1 to 3 strings.txt", "w+");
  FILE *p2 = fopen("/Users/pranavjain/Creative Cloud Files/Thu 1 to 3 validity.txt", "w+");

  for(int i=top; i>=0; i--) {
    fprintf(p, "%s ", stack[i]);
  }
  printf("Successfully written the stack to a file.");
  rewind(p);

  for(int i=top; i>=0; i--) {
    if(stack[i][0] != 'a') {
      fprintf(p2, "%s ", "INVALID");
    }
    else {
      if(stack[i][0] == 'a') {
        int count_a = 0, count_b = 0, j=0;
       for(int j = 0; j<n ; j++) {
         if(stack[i][j] == 'a') {
          count_a++;
        }
        else { break; }
      }
      // printf("\nCounter a: %d\n", count_a);
        for(int j = count_a; j < n; j++) {
          if(stack[i][j] == 'b') {
            count_b++;
          }
          else {
            break;
          }
        }
    //    printf("\nCounter b: %d\n", count_b);

        if(count_a == count_b) {
          fprintf(p2, "%s ", "VALID");
        }
        else {
          fprintf(p2, "%s ", "INVALID");
        }
      }
    }
  }

  fclose(p);
  fclose(p2);

}


int main() {
  while(1) {
    menu();
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1: push(); break;
      case 2: pop(); break;
      case 3: display(); break;
      case 4: operation(); exit(0);
      default: printf("Invalid selection.");
    }
  }
  return 0;
}
