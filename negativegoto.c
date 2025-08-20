#include<stdio.h>
int main ( ) {
     int num= -5;
     if(num<0) {
        goto negative;
     }
     else {
        printf("Positive");
     return 0;
     }
     negative :
         printf("Negative");
         return 0;
}

