#include <stdio.h>
struct student {
  int sno;
  char name[25];
  char branch[5];
};

struct copy {
  int sno;
  char name[25];
  char branch[5];
};

int main() {
  int n;
  printf("Enter no. of entries: ");
  scanf("%d", &n);

  struct student e[n];
  struct copy c[n];


  printf("-----Filling the details-----\n");

  for(int i=0; i<n; i++) {
    printf("Entry %d:-\n", i+1);
    printf("Enter serial no: ");
    scanf("%d", &e[i].sno);
    printf("Enter name: ");
    scanf("%s", e[i].name);
    printf("Enter Branch: ");
    scanf("%s", e[i].branch);
  }

  FILE *p = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/5/5.txt", "w+b");
  fwrite(e, sizeof(e), 1, p);
  rewind(p);
  printf("Serial No\t\tName\t\t\tBranch\n");
  while(fread(c, sizeof(c), 1, p)) {
    for(int i=0; i<n; i++) {
      printf("%d\t\t\t%s\t\t\t%s\n", c[i].sno, c[i].name, c[i].branch);
    }
  }
  fclose(p);

  return 0;
}
