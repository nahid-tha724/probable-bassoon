#include<stdio.h>
int main ( ) {
     int arr[10],n,i;
     int *ptr;
     printf("Enter number of elements: ");
     scanf("%d", &n);
     printf("Enter %d integers: ",n);
     for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
     }
     printf("Elements in reverse order: ");
     ptr= &arr[n-1];
     for(i=0;i<n;i++) {
        printf("%d ", *ptr);
        ptr--;
     }
     return 0;
}
