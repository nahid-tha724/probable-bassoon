#include<stdio.h>
int main ( ) {
     int A [5]={5,10,2,3,50};
     int max=A[0],i;
     for(i=1 ; i<5 ; i++) {
       if(max<A[i]) {
        max=A[i];
       }
     }
     printf("%d",max);
     return 0;
}
