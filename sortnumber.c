#include <stdio.h>
int main() {
    int A, B, C;
    int first, second, third;
    scanf("%d %d %d", &A, &B, &C);
    first = A;
    second = B;
    third = C;
    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }
    if (first > third) {
        int temp = first;
        first = third;
        third = temp;
    }
    if (second > third) {
        int temp = second;
        second = third;
        third = temp;
    }
    printf("%d\n%d\n%d\n", first, second, third);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}

