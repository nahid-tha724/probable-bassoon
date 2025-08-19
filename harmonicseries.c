#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
    }
    else {
            for (int i = 1; i <= n; i++) {
            sum = sum + 1.0 / i;
    }
    }
    printf("The sum of the harmonic series up to 1/%d is: %.6f\n", n, sum);
    return 0;
}
