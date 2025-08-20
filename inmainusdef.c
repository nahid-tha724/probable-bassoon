#include<stdio.h>
void message1( );
void message2 ( );
int main ( ) {
     message1( );
     message2 ( );
     printf("inside main");
}
void message1 ( ) {
       printf("inside M1\n");
}
void message2 ( ) {
       printf("inside M2\n");
}
