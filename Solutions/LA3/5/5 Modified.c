#include <stdio.h>
#include <string.h>

struct student {
  int sno;
  char name[25];
  char branch[5];
  float cg;
};

struct copy {
  int sno;
  char name[25];
  char branch[5];
  float cg;
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
    printf("Enter CGPA: ");
    scanf("%f", &e[i].cg);
  }

  FILE *p = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/5/5.txt", "w+b");
  fwrite(e, sizeof(e), 1, p);
  rewind(p);
  printf("\nSerial No\t\tName\t\t\tBranch\t\t\tCGPA\n");
  while(fread(c, sizeof(c), 1, p)) {
    for(int i=0; i<n; i++) {
      printf("%d\t\t\t%s\t\t\t%s\t\t\t%.1f\n", c[i].sno, c[i].name, c[i].branch, c[i].cg);
    }
  }
  fclose(p);

  char tname[25], tbranch[5]; int ts; float tcg;

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(c[i].cg < c[j].cg) {
        //sorting CGPA
        tcg = c[i].cg;
        c[i].cg = c[j].cg;
        c[j].cg = tcg;

        //sorting name
        strcpy(tname, c[i].name);
        strcpy(c[i].name, c[j].name);
        strcpy(c[j].name, tname);

        //sorting Branch
        strcpy(tbranch, c[i].branch);
        strcpy(c[i].branch, c[j].branch);
        strcpy(c[j].branch, tbranch);

        //sorting Serial no
        ts = c[i].sno;
        c[i].sno = c[j].sno;
        c[j].sno = ts;
      }
    }
  }

  printf("\nThe arranged list is:-\n");
  printf("Serial No\t\tName\t\t\tBranch\t\t\tCGPA\n");
  for(int i=0; i<n; i++) {
    printf("%d\t\t\t%s\t\t\t%s\t\t\t%.1f\n", c[i].sno, c[i].name, c[i].branch, c[i].cg);
  }

  FILE *p2 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/5/5 Modified.txt", "w+b");
  fwrite(c, sizeof(c), 1, p2);
  fclose(p2);



  return 0;
}
