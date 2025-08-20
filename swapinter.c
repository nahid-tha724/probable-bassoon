#include<stdio.h>
int main ( )
{
    int a = 5, b =10, temp;
    int *ptr1 = &a;
    int *ptr2 = &b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("%d %d",a,b);
}
