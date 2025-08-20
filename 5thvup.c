#include<stdio.h>
int main () {
    int X=-5,Y=0,Z=1;
    if (X) {
        if (Y)
            Z=10;
    }
    else
        Z=0;
    printf("%d",Z);
    return 0;
}

