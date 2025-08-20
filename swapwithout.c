#include<stdio.h> //Swap two integers numbers without using any third variable
int main ( ) {
     int a,b;
     printf("Enter two interger number:");
     scanf("%d %d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("a=%d\nb=%d",a,b);
     return 0;
}
