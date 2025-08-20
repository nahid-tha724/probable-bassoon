#include<stdio.h>
int main ( ) {
     int A [5]={5,10,15,20,25};
     int sum=0,i;
     for(i=0 ; i<5 ; i++) {
        sum=sum+A[i];
     }
     printf("%d",sum);
     return 0;
}
