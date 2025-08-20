#include<stdio.h>
int main ( ) {
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     if (a>b) {
        if (a>c) {
            printf("a is the largest number",a);
        }
        else {
            printf(" c is the largest number",c);
        }
     }
     else {
            if (c>b) {
                printf("c is the largest number",c);
            }
            else {
                printf ("b is the largest number",b);
            }
        }
     return 0;
}
