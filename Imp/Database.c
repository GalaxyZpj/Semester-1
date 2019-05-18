#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user {
  char username[25];
  char password[16];
  struct details {
    char fName[25];
    char lName[25];
    struct birthdate {
      int day;
      int month;
      int year;
    }eb;
    char contact[25];
    char city[25];
    char state[25];
  }ed;
  struct user *next;
}USER;

USER *newNode, *head = 0, *temp = 0, *temp1 = 0;

void fileToList() {
  printf("LOADING DATABASE......\n");
  FILE *fp = fopen("/Users/pranavjain/Documents/Travalista/Database.txt", "r");
  while(!feof(fp)) {
    newNode = (USER *)malloc(sizeof(USER));
    fscanf(fp, "%s %s %s %s %d %d %d %s %s %s\n", newNode->username, newNode->password, newNode->ed.fName, newNode->ed.lName,
     &newNode->ed.eb.day, &newNode->ed.eb.month, &newNode->ed.eb.year, newNode->ed.contact, newNode->ed.state, newNode->ed.city);
     if(head != 0) {
       temp->next = newNode;
       temp = newNode;
     }
     else {
       head = temp = newNode;
     }
  }
  temp->next = NULL;

  fclose(fp);
}

void createUser() {
  newNode = (USER *)malloc(sizeof(USER));
  printf("Username: ");
  scanf("%s", newNode->username);
  printf("Password: ");
  scanf("%s", newNode->password);
  printf("\n-----Fill the form-----\n");
  printf("First Name: ");
  scanf("%s", newNode->ed.fName);
  printf("Last Name: ");
  scanf("%s", newNode->ed.lName);
  printf("Birth Date (dd-mm-yyyy): ");
  scanf("%d-%d-%d", &newNode->ed.eb.day, &newNode->ed.eb.month, &newNode->ed.eb.year);
  printf("Contact number: ");
  scanf("%s", newNode->ed.contact);
  printf("State: ");
  scanf("%s", newNode->ed.state);
  printf("City: ");
  scanf("%s", newNode->ed.city);

  if(head != 0) {
    temp->next = newNode;
    temp = newNode;
  }
  else {
    head = temp = newNode;
  }
  temp->next = NULL;
  FILE *fp = fopen("/Users/pranavjain/Documents/Travalista/Database.txt", "a");
  fprintf(fp,"%s %s %s %s %d %d %d %s %s %s\n", temp->username, temp->password, temp->ed.fName, temp->ed.lName,
   temp->ed.eb.day, temp->ed.eb.month, temp->ed.eb.year, temp->ed.contact, temp->ed.state, temp->ed.city);
  printf("\nUser registered successfully.\n");
  fclose(fp);
}

void loginCheck(char uname[], char upass[]) {
  temp = head;
  while(temp != NULL) {
    if(strcmp(uname, temp->username) == 0) {
      if(strcmp(upass, temp->password) == 0) {
        printf("Login Successful.\n");
        temp = head;
        break;
      }
      else {
        printf("Invalid Password!\n");
        break;
      }
    }
    else if (strcmp(uname, temp->username) != 0) {
      temp = temp->next;
    }
  }
  if(temp == NULL) {
    printf("User not found, Consider registering first.\n");
    printf("Enter Username and Password to register.\n");
    createUser();
  }
}

void userPortal() {
  int choice;
  char tuname[25], tupass[25];
  printf("**********TRAVALISTA**********\n");
  printf("1. Login\n");
  printf("2. Signup\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
    printf("Username: ");
    scanf("%s", tuname);
    printf("Password: ");
    scanf("%s", tupass);
    loginCheck(tuname, tupass);
    break;

    case 2:
    createUser();
    break;

    default:
    printf("Invalid choice.\n");

  }
}

int main() {
  fileToList();
//  temp = head;
/*  while(temp != NULL) {
    printf("%s %s %s %s %d %d %d %s %s %s\n", temp->username, temp->password, temp->ed.fName, temp->ed.lName,
     temp->ed.eb.day, temp->ed.eb.month, temp->ed.eb.year, temp->ed.contact, temp->ed.state, temp->ed.city);
     temp = temp->next;
  }*/
  userPortal();
  return 0;
}
