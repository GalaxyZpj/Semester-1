#include <stdio.h>

int main() {

  int i, arr[10];

  for(i=0; i<10; i++) {
    scanf("%d", &arr[i]);
  }

  for(i = 9; i>=0; i--) {
    int *pArr = &arr[i];
    printf("%d", *pArr);
    pArr--;
  }
  printf("\n");

  return 0;
}
