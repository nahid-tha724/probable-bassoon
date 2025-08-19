#include<stdio.h>
int main ( ) {
     int w;
     scanf("%d",&w);
     if((w%2)%2==0 && w>2) {
        printf("Yes",w);
     }
     else{
        printf("No",w);
     }
     return 0;
}
