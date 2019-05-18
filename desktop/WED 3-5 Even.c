#include <stdio.h>
#include <string.h>

int n;

struct employee {
  char name[25];
  int id;
  int experience;
};

void inc_experience(struct employee *p) {
  int tid, texp;
  char ta[25];
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if((p+i)->experience > (p+j)->experience) {
        texp = p->experience;
        (p+i)->experience = (p+j)->experience;
        (p+j)->experience = texp;

        strcpy(ta, (p+i)->name);
        strcpy((p+i)->name, (p+j)->name);
        strcpy((p+j)->name, ta);

        tid = (p+i)->id;
        (p+i)->id = (p+j)->id;
        (p+j)->id = tid;
      }
    }
  }

  for(int i=0; i<n; i++) {
    printf("%s\t\t%d\n", p->name, p->experience);
    p++;
  }
}

int main() {

  printf("Enter no. of employees: ");
  scanf("%d", &n);

  struct employee e[n];

  for(int i=0; i<n; i++) {
    printf("---Employee %d---\n", i+1);
    printf("Enter name: ");
    scanf("%s", e[i].name);
    printf("Enter id: ");
    scanf("%d", &e[i].id);
    printf("Enter year of experience: ");
    scanf("%d", &e[i].experience);
  }

  printf("The names in the increasing order of experience are:\n");
  inc_experience(e);


  return 0;
}
