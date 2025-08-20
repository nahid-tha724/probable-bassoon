#include<stdio.h>
int main ( ) {
     int a,b,temp;
     printf("Enter the value of a and b:");
     scanf("%d %d",&a,&b);
     temp = a;
     a = b;
     b = temp;
     printf("The value of a and b : \n%d \n%d",a,b);
     return 0;
}
