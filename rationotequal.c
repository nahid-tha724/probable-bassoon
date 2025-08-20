#include<stdio.h>
int main ( )
{
    int a,b,c,d;
    float r;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((c-d)!=0)
    {
        r=(float)(a+b)/(c-d);
        printf("%f",r);
    }
    else
    {
        printf("Equal to zero",r);
    }
    return 0;
}
