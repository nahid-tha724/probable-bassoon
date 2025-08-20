#include<stdio.h>
void sum(int *p1,int *p2,int *p3) {
        *p3 = *p1 +*p2;
}
int main ( ) {
     int a=5, b=10, summation=0;
     sum(&a,&b,&summation);
     printf("%d",summation);
}
