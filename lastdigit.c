#include<stdio.h>
int main ( ) {
     int digit,number;
     scanf("%d",&number);
     while(number!=0) {
        digit=number%10;
        printf("%d\n",digit);
        number=number/10;
     }
     return 0;
}
