#include<stdio.h>
int main ( ) {
     int a = 5, b = 10;
     int *ptr1 = &a;
     int *ptr2 = &b;
     int sum = *ptr1 + *ptr2;
     printf("%d",sum);
}
