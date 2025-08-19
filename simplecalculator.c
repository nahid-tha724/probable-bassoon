#include<stdio.h>
int main ( ) {
     int X,Y,sum,sub;
     long long int mul;
     scanf("%d %d",&X,&Y);
     sum=X+Y;
     printf("%d + %d = %d\n",X,Y,sum);
     mul=(long long int)X*(long long int)Y;
     printf("%d * %d = %lld\n",X,Y,mul);
     sub=X-Y;
     printf("%d - %d = %d",X,Y,sub);
     return 0;

}
