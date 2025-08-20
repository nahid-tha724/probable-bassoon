#include<stdio.h>
int main ( ) {
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     if ((a+b)>c && (b+c)>a && (c+a)>b) {
        if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) {
            printf ("Right triangle");
        }
        else {
            printf("Not a right triangle");
        }
     }
     else {
        printf("Can't form a triangle");
     }
     return 0;
}
