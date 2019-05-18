#include <stdio.h>

int main() {
  int arr[5];
  for(int i=0; i<5; i++)
    scanf("%d", &arr[i]);

  for(int i=1; i<5; i++) {
    int t = arr[i];
    int j = i-1;

    while(j>=0 && arr[j]>t) {
      arr[j+1] = arr[j];
      j = j-1;
    }
    arr[j+1] = t;
  }
  for(int i=0; i<5; i++)
    printf("%d", arr[i]);
  return 0;
}
