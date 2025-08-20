#include<stdio.h>
int factorial(int n) {
     int fact=1,i;
     for(i=1 ; i<=n ; i++) {
        fact = fact*i;
     }
     return fact;
}
int main ( ) {
     float sum = 0, i;
     for(i=1 ; i<=7 ; i++) {
        sum = sum + (float)i/factorial(i);
     }
     printf("%.2f",sum);
}
