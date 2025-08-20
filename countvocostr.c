#include<stdio.h>
int main ( ) {
     char str[100];
     int vowels=0, consonents=0,i;
     printf("Enter a string: ");
     fgets (str, sizeof(str), stdin);
     for(int i=0; str[i]!='\0'; i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
                vowels++;
            }
            else {
                consonents++;
            }
        }
     }
     printf("Vowels: %d\n", vowels);
     printf("Consonents: %d\n", consonents);
     return 0;
}
