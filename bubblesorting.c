#include<stdio.h>
int main ( ) {
     int i,j,temp, n=5;
     int arr[5] = {15,16,6,8,5};
     for(i=0 ; i<n-1 ; i++) {
        for(j=0 ; j<n-1 ; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
     }
     for(i=0 ; i<n ; i++) {
        printf("%d ",arr[i]);
     }
     return 0;
}
