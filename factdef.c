#include<stdio.h>
int fact(int n){
     int fact=1,i;
     for(i=n;i>1;i--){
        fact=fact*i;
     }
     return fact;
}
int main ( ){
     int d=fact(5);
     printf("%d",d);
}
