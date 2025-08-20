#include<stdio.h>
int main ( ) {
     int year;
     printf("Here's the year:");
     scanf("%d",&year);
     if((year%4==0 && year%100!=0) || (year %400==0)){
        printf("This year is a Leap year");
     }
     else{
        printf("This year isn't a leap year");
     }
     return 0;
}
