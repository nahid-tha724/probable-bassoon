#include<stdio.h>
int main( ) {
     char str[100],i;
     printf("Enter String element:");
     gets(str);
     for(i=0 ; str[i]!='\0' ; i++){
        printf("%d\n",str[i]);
     }
     return 0;
}
