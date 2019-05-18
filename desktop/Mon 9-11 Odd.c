#include <stdio.h>
#include <string.h>
struct student {
  int rollno;
  char name[25];
  int marks;
  struct address {
    int house_no;
    char street[25];
    char city[10];
    char state[10];
    int pin;
  }ea[5];
}e[5];

void ap(struct student *p) {
  printf("The students whose marks are less than 30 are:\n");
  for(int i=0; i<5; i++) {
    if(p->marks < 30) {
      printf("%s: %d\n", p->name, p->marks);
    }
    p++;
  }
}

void bp(struct student *t) {
  printf("The students who live in noida are:\n");
  for(int i=0; i<5; i++) {
    if(strcmp(t->ea[i].city, "Noida")==0) {     //strncmp function not working
      printf("%s\n", t->name);
    }
    t++;
  }
}

int main() {

  for(int i=0; i<5; i++) {
    printf("-----Enter details for student %d-----\n", i+1);
    printf("Enter name: ");
    scanf("%s", e[i].name);
    printf("Enter roll no: ");
    scanf("%d", &e[i].rollno);
    printf("Enter marks: ");
    scanf("%d", &e[i].marks);
    printf("Enter address with house no, street, city, state, pin,  all seperated by comma in same order: ");
    scanf("%d, %s, %s, %s, %d", &e[i].ea[i].house_no, e[i].ea[i].street, e[i].ea[i].city, e[i].ea[i].state, &e[i].ea[i].pin);
  }

  ap(e);
  bp(e);

  return 0;
}
