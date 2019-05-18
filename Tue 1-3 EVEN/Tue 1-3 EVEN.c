#include <stdio.h>
#include <stdlib.h>
int n;
struct employee {
  char name[25];
  int id;
  int year;
};
int main() {
  printf("Enter no. of entries: ");
  scanf("%d", &n);
  struct employee *e;
  struct employee em[n];

  for(int i=0; i<n; i++) {
    e = (struct employee *)malloc(n * sizeof(e));
  }

  FILE *p = fopen("/Users/pranavjain/Creative Cloud Files/Tue 1-3 EVEN/Tue 1-3 EVENt.c", "w+b");

  for(int i=0; i<n; i++) {
    printf("Record %d\n", i+1);
    printf("Enter name: ");
    scanf("%s", (e+i)->name);

    printf("Enter id: ");
    scanf("%d", &(e+i)->id);

    printf("Enter year of experience: ");
    scanf("%d", &(e+i)->year);
  }
  fwrite(e, sizeof(e), 1, p);

  rewind(p);
  for(int i=0; i<n; i++) {
    while(fread(em, sizeof(em), 1, p)) {
      printf("%s\t%d\t%d\n", em[i].name, em[i].id, em[i].year);
    }
  }


}
