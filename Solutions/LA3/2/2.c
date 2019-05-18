#include <stdio.h>
#include <string.h>

int main() {

  char  para1[100000], para2[100000], tpara1[100000], tpara2[100000];
  printf("---Enter the paragraph to be stored in file 1--- \n");
  gets(para1);
  printf("---Enter the paragraph to be stored in file 2--- \n");
  gets(para2);

  FILE *p1 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/2/2.1.txt", "w+");
  fprintf(p1, "%s", para1);
  fclose(p1);

  FILE *p2 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/2/2.2.txt", "w+");
  fprintf(p2, "%s", para2);
  fclose(p2);

  p1 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/2/2.1.txt", "r");
  p2 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/2/2.2.txt", "r");

  do {
    fscanf(p1, "%s", tpara1);
    fscanf(p2, "%s", tpara2);
    if(strcmp(tpara1, tpara2) == 0) {
      printf("The files are same.\n");
      break;
    }
    else {
      printf("The files are not same.\n");
      break;
    }
  } while(fscanf(p1, "%s", tpara1) == EOF || fscanf(p2, "%s", tpara2) == EOF);

  fclose(p1);
  fclose(p2);

  return 0;
}
