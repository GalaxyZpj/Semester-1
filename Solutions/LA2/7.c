#include <stdio.h>

int main() {

  int i, arr[10];

  printf("Enter ten unique elements of the array: ");
  for(i=0; i<10; i++) {
    scanf("%d", &arr[i]);
  }
  printf("\nThe array is: ");
  for(i=0; i<10; i++) {
    printf("%d ", arr[i]);
  }

  int *pS, *pF, fmax=0, smax = 0;

  for(i=0; i<10; i++) {
    if(arr[i]>fmax) {
      fmax = arr[i];
    }

  }

  for(i=0; i<10; i++) {
    if(arr[i]>smax && arr[i] < fmax) {
      smax = arr[i];
    }
  }

  for(i=0; i<10; i++) {
    if(arr[i] == smax) {
      pS = &arr[i];
    }
  }

  printf("\nThe second largest element is %d and its address is %x.\n", *pS, pS);

  return 0;
}
