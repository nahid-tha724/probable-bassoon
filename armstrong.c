#include<stdio.h>
#include<math.h>
int main ( ) {
     int n,original,rem,d=0,sum=0;
     printf("Enter a number: ");
     scanf("%d", &n);
     original=n;
     while(n!=0) {
        n=n/10;
        d++;
     }
     n=original;
     while(n!=0) {
        rem=n%10;
        sum=sum+pow(rem,d);
        n=n/10;
     }
     printf("%d\n", sum);
     if(sum==original) {
        printf("Armstrong");
     }
     else {
        printf("Not an armstrong");
     }
     return 0;
}
