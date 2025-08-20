#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main ( ) {
     int a,b;
     printf("Enter two integers: ");
     scanf("%d %d",&a,&b);
     int result = sum(a,b);
     printf("Summation: %d", result);
     }
