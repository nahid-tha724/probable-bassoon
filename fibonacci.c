#include<stdio.h>
int main ( ) {
     int i,n1=1,n2=1,n,fib;
     scanf("%d",&n);
     printf("%d %d ",n1,n2);
     for(i=1 ; i<=n-2 ; i++) {
        fib= n1 + n2;
        printf("%d ",fib);
        n1=n2;
        n2=fib;
     }
     return 0;
}
