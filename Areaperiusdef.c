#include<stdio.h>
void recInfo(float l, float w) {
        float area = l*w;
        float perimeter = 2*(l+w);
        printf("Area: %.3f\nPerimeter: %.3f",area,perimeter);
}
int main ( ) {
     recInfo(7.5,11.7);
}
