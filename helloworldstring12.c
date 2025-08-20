#include<stdio.h>
#include<string.h>
int main ( ) {
    int str;
     char str1[100] = "Hello";
     char str2[100] = "World";
     int d = str, cmp(str1,str2);
     if (d==0) {
        printf("Equal");
     }
     else{
        printf("Not equal");
     }
     return 0;
}
