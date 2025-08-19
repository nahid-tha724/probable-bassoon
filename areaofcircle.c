#include<stdio.h>
int main ( ) {
    double R,area;
    scanf("%lf",&R);
    area = 3.141592653*R*R;
    printf("%.9lf\n",area);
    return 0;
}
