#include<stdio.h>
int main ( ) {
     int a=75, b=90;
     int *ptr1,*ptr2;
     ptr1=&a;
     ptr2=&b;
     if(*ptr1<*ptr2) {
        printf("%d is the largest number",*ptr2);
     }
     else{
        printf("%d is the largest number",*ptr2);
     }
     return 0;
}
