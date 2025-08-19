#include <stdio.h>
int main() {
    float num1, num2, result;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    }
    else {
        result = num1 / num2;
        printf("You entered: %.2f and %.2f\n", num1, num2);
        printf("Result of %.2f divided by %.2f is: %.2f\n", num1, num2, result);
    }
    return 0;
}
