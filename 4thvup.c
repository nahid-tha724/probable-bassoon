#include<stdio.h>
int main () {
    int X=-5,Y=0,Z=1;
    if (X || Y || Z)
        Y=10;
    else
        Z=0;
    printf("%d %d",Y,Z);
    return 0;
}

