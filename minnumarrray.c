#include<stdio.h>
int main ( ) {
     int A [5]={5,10,2,3,50};
     int min=A[0],i;
     for(i=1 ; i<5 ; i++) {
       if(min>A[i]) {
        min=A[i];
       }
     }
     printf("%d",min);
     return 0;
}
