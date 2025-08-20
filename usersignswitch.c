#include<stdio.h>
int main ( ) {
     int num1,num2;
     float result;
     char op;
     scanf("%d%d %c",&num1,&num2,&op);
     switch(op) {
     case '+':
         result = num1 + num2;
         printf("%d",result);
         break;
     case '-':
        result = num1 - num2;
        printf("%d",result);
        break;
     case '*':
        result = num1 * num2;
        printf ("%d",result);
        break;
     case '/':
        if (num2==0){
            printf ("0 isn't allowed");
        }
        else {
            printf ("%d",result);
        }
        break;
     }
     return 0;
}
