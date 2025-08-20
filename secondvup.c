#include<stdio.h>
int main ( ) {
     int X=5,Y=0,Z=1;
     if (X && Y)
        X=10;
     else
        Y=10;
     printf("%d %d",X,Y);
     return 0;
}
