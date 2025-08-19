#include <stdio.h>
int main() {
    int count = 0, sum = 0;
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            count++;
            sum = sum + i;
    }
    }
    printf("The number of integers divisible by 7 between 100 and 200: %d\n", count);
    printf("The sum of integers divisible by 7 between 100 and 200: %d\n", sum);

    return 0;
}
