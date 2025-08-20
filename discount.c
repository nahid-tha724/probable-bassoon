#include<stdio.h>
int main ( ) {
     float purchase,discount,fa;
     printf("Actual Price: ");
     scanf("%f",&purchase);
     if(purchase<1000) {
        printf("Final amount:%f",purchase);
     }
     else if (purchase>=1000 && purchase<=5000) {
        fa=purchase-(purchase*0.1);
        printf("Final amount:%f",fa);
     }
     else{
        fa=purchase-(purchase*0.2);
        printf("Final amount: %f",fa);
     }
     return 0;
}
