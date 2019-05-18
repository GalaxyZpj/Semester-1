#include <stdio.h>

int main() {
  char num[] = "17.456";
  char *pNum1;
  char *pNum2;
  char *pNum3;
  int r, i=0, ri=1, l;

  printf("Enter the place to which it has to be rounded off: ");
  scanf("%d", &r);

  for(i=0; i<6; i++) {
    if(num[i] == '.') {
      pNum1 = &num[i];
      pNum2 = &num[i+1];
      pNum3 = &num[i+2];
    }
  }

  while(ri < r) {
    pNum1++;
    pNum2++;
    pNum3++;
    ri++;
  }

  if((int)*pNum3 >= (int)'5') {
    *pNum2 = (char)((int)*pNum2 + 1);
  }
  switch(r) {
    case 1:
    l = 4;
    break;

    case 2:
    l = 5;
    break;

    case 3:
    l = 6;
    break;

    case 4:
    l = 7;
    break;

  }

  printf("The rounded off number is: ");
  for(i=0; i<l; i++) {
    printf("%c", num[i]);
  }
  printf("\n");

  return 0;
}
