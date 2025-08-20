#include<stdio.h>
int main ( ){
     int num;
     printf("Please enter your number to check:");
     scanf("%d",&num);
     if(num%5==0){
        printf("Divisible by 5");
     }
     else{
        printf("Not divisible");
     }
     return 0;
}
