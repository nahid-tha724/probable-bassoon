#include <stdio.h>
void printArray(int num[ ], int n);
int main() {
    int num[ ] = {5, 10, 15, 20, 25};
    int size = sizeof(num) / sizeof(num[0]);
    printArray(num, size);
}
void printArray(int num[ ], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}

