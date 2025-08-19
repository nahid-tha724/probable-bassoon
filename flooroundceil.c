#include <stdio.h>
#include <math.h>
int main() {
    double A, B, result;
    scanf("%lf %lf", &A, &B);
    if (B == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }
    result = A / B;
    printf("floor %.0f / %.0f = %.0f\n", A, B, floor(result));
    printf("ceil %.0f / %.0f = %.0f\n", A, B, ceil(result));
    printf("round %.0f / %.0f = %.0f\n", A, B, round(result));

    return 0;
}
