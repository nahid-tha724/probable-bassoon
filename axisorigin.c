#include<stdio.h>
int main ( ) {
     int X,Y;
     scanf("%d %d",&X,&Y);
     if(Y==0){
        printf("Point lies on X axis");
     }
     else if (X==0) {
        printf("Point lies on Y axis");
     }
     else if (X==0 && Y==0) {
        printf ("point lies on origin");
     }
     else {
        printf("Point lies on XY plane");
     }
     return 0;
}
