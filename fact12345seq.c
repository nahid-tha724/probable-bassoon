#include<stdio.h>
int main ( ) {
     int fact=1,i,n;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
        fact=fact*i;
     }
     printf("The factorial of an integer: %d",fact);
     return 0;
}
