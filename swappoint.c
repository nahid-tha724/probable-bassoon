#include<stdio.h>
int main ( ) {
     int a=5, b=10, temp;
     int *ptr1, *ptr2;
     ptr1 = &a;
     ptr2 = &b;
     temp = *ptr1;
     *ptr1 = *ptr2;
     *ptr2 = temp;
     printf ("%d %d",a,b);
     return 0;
}
