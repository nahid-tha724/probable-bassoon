#include<stdio.h>
#include<string.h>
int main ( ) {
     char str1[100] = "Hello";
     char str2[100] = "World";
     int a,b;

     a=strlen(str1);
     b=strlen(str2);
     printf("Length:%d %d",a,b);

     strcat(str1,str2);
     printf("\nConcaternate:%s",str1);

     strcpy(str1,str2);
     printf("\nCopy:%s %s",str1,str2);

     int d=strcmp(str1,str2);
     printf("\nComparison:%d",d);

     return 0;
}
