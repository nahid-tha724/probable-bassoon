#include<stdio.h>
int main ( ) {
     int X,Y,Z,a,b,c;
     printf("Enter the value of a,b and c: ");
     scanf("%d %d %d",&a,&b,&c);
     X=a-b/3+c*2-1;
     Y=a-b/(3+c)*(2-1);
     Z=a-(b/(3+c)*2)-1;
     printf("X=%d\nY=%d\nZ=%d",X,Y,Z);
     return 0;
}
