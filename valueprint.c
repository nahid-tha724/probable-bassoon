#include<stdio.h>
int main ( ) {
     int i,n;
     scanf("%d %d",&i,&n);
     if(n>10 && i>10) {
        printf("%d",n);
        printf("%d",i);
     }
     else{
        printf("Hello");
     }
     return 0;
}
