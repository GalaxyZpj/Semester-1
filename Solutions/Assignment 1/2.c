#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_File(char s[]) {
  FILE *p = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/Assignment 1/2.txt", "w+");
  fprintf(p, "%s\n", s);
  fclose(p);
}

void duplicate() {
  
}

int main() {
  char *st = (char *)malloc(200);
  printf("Enter the string: ");
  gets(st);
  printf("The string is: %s\n", st);
  string_File(st);

  free(st);
  return 0;
}
