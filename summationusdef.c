#include<stdio.h>
int sum (int a, int b) {
     int result;
     result = a+b;
     return result;
}
int main ( ) {
     int summation;
     summation = sum(5,10);
     printf("%d",summation);
}
