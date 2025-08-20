#include<stdio.h>
int main ( ) {
     char letter;
     scanf("%c",&letter);
     switch (letter) {
     case 'A' : case 'E' : case 'O' : case 'I' : case 'U' :
     printf("Vowel");
     break;
     default : printf("Consonent");
     }
     return 0;
}
