#include<stdio.h>
int main ( ) {
     int n =7,i;
     double sum = 0;
     for (i=1;i<=n;i++) {
        sum = sum + (double)i / factorial (i);
     }
     printf("%lf",sum);
     return 0;
}
int factorial (int n) {
     int fact = 1;
     for (int i =1 ; i<=n ; i++) {
        fact =fact*i;
     }
     return fact;
}
