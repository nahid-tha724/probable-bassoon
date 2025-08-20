#include<stdio.h>
int main ( ) {
     float number;
     int integer_part;
     float floatingpoint_part;
     printf("Enter a number: ");
     scanf("%f", &number);
     integer_part = (int)number;
     floatingpoint_part = number-integer_part;
     printf("Integer part: %d\n", integer_part);
     printf("Fractional part: %.3f\n", floatingpoint_part);
     return 0;
}
