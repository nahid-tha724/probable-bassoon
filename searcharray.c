#include<stdio.h>
int main ( ) {
     int num,i,flag=0;
     printf("Enter your number:");
     scanf("%d",&num);
     if(num==0 || num==1) {
        flag=1;
     }
     for(i=2 ; i<num ; i++) {
        if(num%i==0) {
            flag=1;
            break;
        }
     }
     if(flag==0) {
        printf("Prime Number");
     }
    else {
        printf("Not a Prime Number");
    }
    return 0;
}
