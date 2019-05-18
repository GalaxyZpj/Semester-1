#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 20
char stack[n], c;
int top = -1;

void push(char c) {
  if(top == 19) {
    printf("Stack full.");
  }
  else {
    top++;
    stack[top] = c;
    printf("Inserted '%c' successfully.\n", c);
  }
}

void pop() {
  if(top == -1) {
    printf("Stack empty.");
  }
  else {
    printf("Deleted '%c'\n", stack[top]);
    top--;
  }
}
void display() {
  if(top == -1) {
    printf("Stack empty.\n");
  }
  else {
    printf("The stack elements are: ");
    for(int i=top; i>=0; i--) {
      printf("%c ", stack[i]);
    }
  }
}
int main() {
  FILE *p = fopen("/Users/pranavjain/Creative Cloud Files/Wed 3-5 EVEN/Wed 3-5 EVEN.txt", "r");
  while((c = fgetc(p)) != EOF) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      pop(); pop(); pop(); pop(); pop();
    }
    push(c);
  }
  printf("End of file detected!\nThe characters in the stack are: ");
  display();
  fclose(p);
  return 0;
}
