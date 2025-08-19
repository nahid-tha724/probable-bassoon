#include <stdio.h>
#include <math.h>
int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    double power1 = B * log(A);
    double power2 = D * log(C);
    if (power1 > power2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

