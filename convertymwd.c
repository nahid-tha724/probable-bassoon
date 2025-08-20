#include<stdio.h> //Convert days into year,month,week,day
int main ( ) {
     int days,years,months,weeks;
     scanf("%d",&days);
     years=days/365;
     days=days%365;
     printf("Years:%d\n",years);
     months=days/30;
     days=days%30;
     printf("Months:%d\n",months);
     weeks=days/7;
     days=days%7;
     printf("Weeks:%d\n",weeks);
     days=days/1;
     printf("days:%d\n",days);
     return 0;
}
