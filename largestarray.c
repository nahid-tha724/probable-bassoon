#include<stdio.h>
int main ( ) {
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
     int num[size],i,max;

     printf("Enter the array element\n");
     for(i=0 ; i<size ; i++){
        printf("num[%d]=",i+1);
        scanf("%d",&num[i]);
     }
     max=num[0];
     for(i=1 ; i<5 ; i++) {
        if(num[i]>max){
            max=num[i];
        }
     }
     printf("Largest Number:%d\n",max);
     return 0;
}
