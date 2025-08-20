#include<stdio.h>
int main ( ) {
     int n=575, num=0, r=0;
     num=n/500;
     r=n%500;
     printf("500 TK : %d\n",num);
     num=r/100;
     r=r%100;
     printf("100 TK : %d\n",num);
     num=r/50;
     r=r%50;
     printf("50 TK : %d\n",num);
     num=r/20;
     r=r%20;
     printf("20 TK : %d\n",num);
     num=r/10;
     r=r%10;
     printf("10 TK : %d\n",num);
     num=r/5;
     r=r%5;
     printf("5 TK : %d\n",num);
     num=r/2;
     r=r%2;
     printf("2 TK : %d\n",num);
     num=r/1;
     r=r%1;
     printf("1 TK : %d\n",num);
     return 0;
}
