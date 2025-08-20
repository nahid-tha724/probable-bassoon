#include<stdio.h>
int main ( ) {
     int i=1;
     start :
        printf("%d",i);
        i++;
        for(i=1 ; i>=10 ; i++){
        if(i==5){
            break;
        }
        goto start;
        }
        return 0;
}

