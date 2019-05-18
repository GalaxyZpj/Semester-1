#include <stdio.h>
#include <string.h>
int main() {
  int i=0;
  char s[] = "Pranav";

  int size = sizeof(s)/sizeof(char);

  printf("%d\n", size);

  do {
    printf("%c", s[i]);
    i++;
  } while(s[i] == '\0');

  return 0;
}
