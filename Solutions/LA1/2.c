#include <stdio.h>
#include <string.h>

struct bank {
    int AccNo;
    char name[25];
    int bal;
}entry[10];

int main() {
    int i;
    for(i=0; i<3; i++) {

        printf("Enter account no. for account %d: ", i+1);
        scanf("%d", &entry[i].AccNo);

        printf("Enter name: ");
        //    fflush(stdin);

       scanf("%s", &entry[i].name);
      //  gets(entry[i].name);

        printf("Enter balance: ");
        scanf("%d", &entry[i].bal);



    }

    for(i=0; i<3; i++) {
        printf("Customer %d\n", i+1);
        printf("%d, %s, %d\n", entry[i].AccNo, entry[i].name, entry[i].bal);
    }

    printf("======================================= Customers with bank balance less than 10000 =================================================================================================================\n");
        for(i=0; i<3; i++) {
            if(entry[i].bal < 10000) {
                printf("%d: %s\n", entry[i].AccNo, entry[i].name);
            }
    }

    int trans, am, ac;

    printf("Enter the account no. and enquiry (1 for deposit, 0 for withdrawal): ");
    scanf("%d, %d", &ac, &trans);

    printf("Enter the amount: ");
    scanf("%d", &am);

    for(i=0; i<3; i++) {
      if(ac == entry[i].AccNo) {
        switch (trans) {
          case 1:
            entry[i].bal += am;
            break;
          case 2:
            entry[i].bal -= am;
            break;
        }
        printf("Your new balance is: %d\n", entry[i].bal);
      }
    }


return 0;
}
