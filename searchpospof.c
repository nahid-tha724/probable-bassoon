#include<stdio.h>
int main ( ) {
     int arr [ ] = {10,25,30,45,60,75,80};
     int size = 7;
     int search = 45, found = 0, position = 1;
     printf("Array elements: ");
     for(int i=0 ; i<size ; i++) {
        printf("%d ", arr[i]);
     }
     printf("\nSearching for: %d\n", search);
     for(int i=0 ; i<=size ; i++) {
        if(arr[i] == search) {
            found=1;
            position=i;
            break;
        }
     }
     if(found==1){
        printf("Element %d found at position %d", search, position);
     }
     else{
        printf("Element %d is not found in array", search);
     }
     return 0;
}
