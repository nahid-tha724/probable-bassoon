#include<stdio.h>
int main ( ) {
     long long int i,sum=0,n;
     scanf("%lld",&n);
     for(i=1 ; i<=n ; i=i+1) {
        sum=sum+i;
     }
     printf("%lld",sum);
     return 0;
}
