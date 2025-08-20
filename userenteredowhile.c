#include<stdio.h>
int main ( ) {
     int number,sum=0;
     scanf("%d",&number);
     if(number>0 && number<100)
     do{
        sum=sum+number;
        scanf("%d",&number);
     } while(number>0 && number<100);
     printf("Sum of user-entered numbers:%d",sum);
     return 0;
}
