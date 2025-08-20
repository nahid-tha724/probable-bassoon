#include<stdio.h>
int main ( ) {
     int n,sum=0,i;
     printf("Enter a number: ");
     scanf("%d", &n);
     for(i=1 ; i<n ; i++) {
        if(n%i==0) {
            sum=sum+i;
        }
     }
     if(sum==n) {
        printf("Perfect", sum);
     }
     else {
        printf("Not a perfect", sum);
     }
     return 0;
}
