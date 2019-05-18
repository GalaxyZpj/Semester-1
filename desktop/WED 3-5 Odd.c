#include <stdio.h>
int n;
struct point {
  int x;
  int y;
  int z;
  int p;
  int q;
}f;

void avg(struct point *p, struct point *fp) {
  fp->x = 0;
  fp->y = 0;
  fp->z = 0;
  fp->p = 0;
  fp->q = 0;

  for(int i=0; i<n; i++) {
    fp->x += (p+i)->x;
    fp->y += (p+i)->y;
    fp->z += (p+i)->z;
    fp->p += (p+i)->p;
    fp->q += (p+i)->q;
  }

  printf("The average point is: (%d, %d, %d, %d, %d).", fp->x, fp->y, fp->z, fp->p, fp->q);
}

int main() {

  printf("Enter no. of points: ");
  scanf("%d", &n);

  struct point e[n];

  for(int i=0; i<n; i++) {
    printf("Enter value of x, y, z, p, q seperated by spaces: ");
    scanf("%d %d %d %d %d", &e[i].x, &e[i].y, &e[i].z, &e[i].p, &e[i].q);
  }

  avg(e, &f);



  return 0;
}
