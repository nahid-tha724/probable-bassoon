#include<stdio.h>
int main ( ) {
     int x,y,z;
     printf("Enter the value of x,y and z:");
     scanf("%d %d %d",&x,&y,&z);
     if((x+y)>z && (x+z)>y && (z+y)>x) {
        if((x==y) && (y==z) && (z==x)) {
            printf("It's an equilateral triangle");
        }
        else if((x==y) || (y==z) || (z==x)){
            printf("It's an isosceles triangle");
        }
        else{
            printf("it's a scalene triangle");
        }
     }
     else{
        printf("it's not a triangle");
     }
     return 0;
}
