#include<stdio.h>
int main ( ) {
     int i,n,d;
     scanf("%d",&n);
     for(i=1 ; i<=10 ; i++){
        d=n*i;
        printf("%d*%d:%d\n",n,i,n*i);
     }
     return 0;
}
