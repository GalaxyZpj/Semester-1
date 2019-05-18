#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
int main() {
  printf("Enter the number of strings: ");
  scanf("%d", &n);

  char *p[n];

  for(int i=0; i<n; i++) {
    p[i] = (char *)malloc(100);
    printf("Enter string %d: ", i+1);
    scanf("%s", *(p+i));
  }

  FILE *fp = fopen("/Users/pranavjain/Creative Cloud Files/M.txt", "w+");
  for(int i=0; i<n; i++) {
    fprintf(fp, "%s ", *(p+i));
  }
  rewind(fp);
  printf("\nThe entered strings are:-\n");
  int i = 0;
  while(fscanf(fp, "%s ", *(p+i)) != EOF) {
    printf("String %d is %s\n", i+1, *(p+i));
    i++;
  }

  for(i=0; i<n; i++) {
    int counter = 0;
    for(int j = 0; j<n; j++) {
      if(strcmp(*(p+i), *(p+j)) == 0) {
        counter++;
      }
    }
    if(counter > 1) { printf("String '%s' is occured %d times.\n", *(p+i), counter); break;}
  }

  return 0;
}
