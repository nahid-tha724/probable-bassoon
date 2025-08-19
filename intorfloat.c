#include <stdio.h>
#include <math.h>
int main() {
    double N;
    scanf("%lf", &N);
    int integerPart = (int)N;
    double decimalPart = N - integerPart;
    if (fabs(decimalPart) < 1e-6) {
        printf("int %d\n", integerPart);
    } else {
        printf("float %d %.3f\n", integerPart, fabs(decimalPart));
    }
    return 0;
}

