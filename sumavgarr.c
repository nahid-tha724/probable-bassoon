#include<stdio.h>
int main ( ) {
     int arr[ ] = {27,86,73,30,47};
     int size = 5;
     int sum =0;
     float average;
     printf("Array elements: ");
     for(int i=0;i<size;i++) {
        printf("%d ", arr[i]);
        sum=sum+ arr[i];
     }
     average = (float)sum/size;
     printf("\nSum of elements; %d", sum);
     printf("\nAverage of elements: %.2f", average);
     return 0;
}
