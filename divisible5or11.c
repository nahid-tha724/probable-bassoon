#include<stdio.h>
int main ( ){
     int num;
     printf("Enter your number to check:");
     scanf("%d",&num);
     if(num%5==0 && num%11==0){
        printf("Divisible by 5 and 11");
     }
     else{
        printf("Not divisible");
     }
     return 0;
}
