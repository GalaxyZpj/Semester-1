#include <stdio.h>

struct intNo {
    int intn;
    float floatn;
}e[3];

int main() {
int i;
for(i=0; i<3; i++) {
    printf("Enter no. %d with integral part, floating part: ", i+1);
    scanf("%d, %f", &e[i].intn, &e[i].floatn);
}

float sum;

for(i=0; i<3; i++) {
    sum = sum + e[i].floatn + e[i].intn;
}

printf("The average is: %f", sum/3);




return 0;
}
