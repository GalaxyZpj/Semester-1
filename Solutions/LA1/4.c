#include <stdio.h>
struct map {
  char country[25];
  char capital[25];
}e[10];
int main() {

  int i, j;

  for(i=0; i<10; i++) {
    printf("Enter country name and its capital seperated by a space: ");
    scanf("%s %s", &e[i].country, &e[i].capital);
  }

  printf("The entered details are:\n");

  for(i=0; i<10; i++) {
    printf("%s: %s\n", e[i].country, e[i].capital);
  }

  char input[25];

  printf("Enter the name of the country: ");
  scanf("%s", &input);

  for(i=0; i<10; i++) {
    if(e[i].country[0] == input[0] && e[i].country[1] == input[1] && e[i].country[2] == input[2] && e[i].country[3] == input[3] && e[i].country[4] == input[4]) {
      printf("%s's capital is %s.\n", e[i].country, e[i].capital);
    }
  }


  return 0;
}
