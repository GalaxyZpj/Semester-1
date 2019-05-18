#include <stdio.h>
#include <string.h>

int main() {

  char  para1[100000], para2[100000], tpara1[100000], tpara2[100000];
/*  printf("---Enter the paragraph to be stored in file 1--- \n");
  gets(para1);
  printf("---Enter the paragraph to be stored in file 2--- \n");
  gets(para2);

  FILE *p1 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/3/3.1.txt", "w+");
  fprintf(p1, "%s\n", para1);
  fclose(p1);

  FILE *p2 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/3/3.2.txt", "w+");
  fprintf(p2, "%s\n", para2);
  fclose(p2);
*/
  FILE *p1 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/3/3.1.txt", "r");
  FILE *p2 = fopen("/Users/pranavjain/Documents/Sem 2/SDF/Tutorial Sheets/Solutions/LA3/3/3.2.txt", "r");

  while (1) {


/*  while(fgets(tpara1, 100000, p1) == "\n" || fgets(tpara1, 100000, p1) == EOF) {
      puts(tpara1);
    }

    while(fgets(tpara2, 100000, p2) == "\n" || fgets(tpara2, 100000, p2) == EOF) {
      puts(tpara2);
    }
*/

  printf("%s", fgets(tpara1, 100000, p1));
  printf("%s", fgets(tpara2, 100000, p2));



  if(fscanf(p1, "%s", tpara1) == EOF || fscanf(p2, "%s", tpara2) == EOF) {
    if(fscanf(p1, "%s", tpara1) == EOF) {
      while(fscanf(p2, "%s", tpara2) == EOF) {
        printf("%s", tpara2);
      }
      break;
    }
    else {
      while(fscanf(p1, "%s", tpara1) == EOF) {
        printf("%s", tpara1);
      }
      break;
    }
  }

  }

/*  while(1) {
    fscanf(p1, "%c", tpara1);
    if(p1 == '.') {
      printf("End of line ");
    }
    if(fscanf(p1, "%c", tpara1) == '.') {
      break;
    }

  }
*/

  fclose(p1);
  fclose(p2);

  return 0;
}
