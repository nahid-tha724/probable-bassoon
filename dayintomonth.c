#include<stdio.h>
int main ( ) {
     int months,days;
     printf("Enter your days: ");
     scanf("%d",&days);
     months=days/30;
     days=days%30;
     printf("months:%d\ndays:%d",months,days);
     return 0;
}
