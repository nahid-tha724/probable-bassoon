#include<stdio.h>
int main ( ) {
     int i, arr[5] = {10,20,30,40,50};
     int *p = &arr[4];
     for(i=0 ; i<5 ; i++) {
        printf("%d ", *p);
        p = p-1;
     }
     return 0;
}
