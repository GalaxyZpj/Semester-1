#include <stdio.h>

struct par {
  int a;
  int b;
}e;

void func(struct par *p) {
  for(int i=0; i<2; i++) {
      if((p+i)->b>2000) {
        printf("%d", (p+i)->b);
      }
  }
}

int main() {

  scanf("%d", &e.a);
  scanf("%d", &e.b);

  func(&e);


  return 0;
}
