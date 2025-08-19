#include <stdio.h>
int main() {
    int A, B;
    char S;
    scanf("%d%c%d", &A, &S, &B);
    switch (S) {
        case '+':
            printf("%d\n", A + B);
            break;
        case '-':
            printf("%d\n", A - B);
            break;
        case '*':
            printf("%d\n", A * B);
            break;
        case '/':
            if (B != 0) {
                printf("%d\n", A / B);
            } else {
                printf("Division by zero error\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}

