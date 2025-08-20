#include<stdio.h>
#include<stdio.h>
int main ( ) {
     char str1[100] = "Gyokuyo";
     char str2[100];
     int i,j=0,length;
     length=strlen(str1);
     for(i=length-1;i>=0;i--,j++){
        str2[j]=str1[i];
     }
     printf("%s",str2);
     return 0;
}
