#include<stdio.h>
#include<string.h>
int main ( ) {
     char str1[100] = "Hello World";
     char str2[100] = "World";
     if(strstr(str1,str2) == NULL) {
        printf("str2 is not a substring of str1");
     }
     else {
        printf("str2 is a substring of str1");
     }
     return 0;
}
