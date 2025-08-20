#include<stdio.h>
int main ( )
{
    float base, height, a, b, c, area, perimeter;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base,&height);
    area = 0.5 * base * height;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a,&b,&c);
    perimeter = a + b + c;

    printf("Area of the triangle: %.2f\n", area);
    printf("Perimeter of the triangle: %.2f\n", perimeter);
    return 0;
}
