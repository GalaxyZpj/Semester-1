#include <stdio.h>

int main() {

  int i;

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};


  void *memory = malloc(sizeof(int));
  int *p1 = (int *)malloc;

  *p1 = arr[0];

  






  for(i=0; i<9; i++) {
    printf("%d\n", arr[i]);
  }


  return 0;
}
