#include<stdio.h>
int main( ) {
     int num;
     printf("Enter your number if it's positive or not:");
     scanf("%d",&num);
     if(num>0){
        printf("Positive");
     }
     else{
        printf("Negative");
     }
     return 0;
}
