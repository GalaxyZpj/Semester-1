#include <stdio.h>
#include <string.h>
int main() {
  int n;
  printf("Enter the number of names to be entered: ");
  scanf("%d", &n);
//**************************************************************************************************
  FILE *f = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/1/1.txt", "w+");
  char name[25], c[n][25];
  for(int i=0; i<n; i++) {
    printf("Enter name %d: ", i+1);
    scanf("%s", name);
    fprintf(f, "%s\n", name);
  }
  fclose(f);
//**************************************************************************************************
  f = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/1/1.txt", "r");
  for(int i=0; fscanf(f, "%s\n", name)!=EOF; i++) {
    strcpy(c[i], name);
  //  printf("%s\n", c[i]);
  }
  fclose(f);
//**************************************************************************************************
  char t[25];
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(strcmp(c[i], c[j])<0) {
        strcpy(t, c[i]);
        strcpy(c[i], c[j]);
        strcpy(c[j], t);
      }
    }
  }
  printf("\nThe names in ascending order are:\n");
  for(int i=0; i<n; i++) {
    puts(c[i]);
  }
//**************************************************************************************************
  f = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/1/1new.txt", "w+");
  for(int i=0; i<n; i++) {
    fprintf(f, "%s\n", c[i]);
  }
  printf("\nSorted names successfully written in a new file.\n");
  fclose(f);
  return 0;
}
