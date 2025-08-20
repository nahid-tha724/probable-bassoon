#include<stdio.h>
int fibonacci(int n);
int main ( ) {
     int n;
     scanf("%d",&n);
     if (n <= 0) {
        printf("Enter a positive integer.");
    } else {
        int fib = fibonacci(n);
        printf("%d", fib);
    }
     return 0;
}
int fibonacci(int n) {
     if (n==1 || n==2) {
        return 1;
     }
     return fibonacci(n-1) + fibonacci(n-2);
}
