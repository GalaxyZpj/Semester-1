#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
struct aadhar {
  char name[25];
  int id;
  int day;
  int month;
  int year;
  int age;
};

int main() {
  printf("Enter the number of entries: ");
  scanf("%d", &n);

  struct aadhar *e;
  for(int i=0; i<n; i++) {
    e = (struct aadhar*)malloc(n * sizeof(struct aadhar));
  }
  printf("FILLING ENTRIES:-\n");
  FILE *p = fopen("/Users/pranavjain/Creative Cloud Files/Tue 1-3 ODD/Tue 1-3 ODD.txt", "w+");
  for(int i=0; i<n; i++) {
    printf("Record %d\n", i+1);
    printf("Enter name: ");
    //fflush(stdin);
    //  gets((e + i)->name);
    scanf("%s", (e + i)->name);
    printf("Enter Aadhar id: ");
    scanf("%d", &(e + i)->id);
    printf("Enter birth date in format 'dd mm yyyy': ");
    scanf("%d %d %d", &(e + i)->day, &(e + i)->month, &(e + i)->year);
    printf("Enter age: ");
    scanf("%d", &(e + i)->age);
  }

  for(int i=0; i<n; i++) {
      fprintf(p, "%s\t%d\t%d-%d-%d\t%d\n", (e + i)->name, (e + i)->id, (e + i)->day, (e + i)->month, (e + i)->year, (e + i)->age);
  }

  




  free(e);
  return 0;
}
