#include<stdio.h>
int main ( ) {
     char ch;
     printf("Enter your alphabet:");
     scanf("%c",&ch);
     if (ch>='A' && ch<='Z') {
        printf("Capital letter");
     }
     else {
        printf("Small letter");
     }
     return 0;
}
