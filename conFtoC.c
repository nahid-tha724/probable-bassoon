#include<stdio.h>
int main ( ) {
     float C,F;
     printf("Enter temperature: ");
     scanf("%f",&F);
     C=(5.0/9.0)*(F-32);
     printf("Fahrenheit to Celceous:%f",C);
     return 0;
}
