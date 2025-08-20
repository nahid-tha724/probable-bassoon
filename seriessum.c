#include<stdio.h>
#include<math.h>
int main ( ) {
     int i,n;
     double sum=0;
     scanf("%d",&n);
     for(i=1 ; i<=n ; i++) {
        sum=sum+1/pow(i,i);
     }
     printf("Summation of series:%lf",sum);
     return 0;
}
