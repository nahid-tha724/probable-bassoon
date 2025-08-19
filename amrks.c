#include<stdio.h>
      int main () {
         int  marks;
         printf("Enter student's number : ");
         scanf("%d", &marks);

         if (marks >= 0 && marks <= 30) {
            printf("Fail!! \n");
         }
         else if (marks >= 30 && marks <= 100) {
            printf("Pass!!!");
         }
         else {
            printf("**Wrong Number**");
         }
         return 0 ;
         }












