#include<stdio.h>
#include<string.h>
int main ( ) {
     char str1[100]="Hello";
     char str2[100];
     int i,j=0,length;
     length=strlen(str1);
     for(i=length-1;i>=0;i--,j++){
        str2[j]=str1[i];
     }
     str2[length]='\0';
     if(strcmp(str1,str2)==0){
        printf("Palindrome");
     }
     else{
        printf("Not Palindrome");
     }
     return 0;
}
