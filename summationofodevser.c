#include<stdio.h>
int main ( ) {
     int sum=0,i,j,n,sum1=0,sum2=0;
     scanf("%d",&n);
     for(i=0;i<=n;i++){
        if(i%2!=0){
            sum1=sum1+i;
        }
        else{
            sum2=sum2+i;
        }
     }
    printf("Summation of the following series : %d\n",sum1);
    printf("Summation of the following series : %d\n",sum2);

    sum=sum1-sum2;
    printf("Summation of the following series : %d",sum);
     return 0;
}

