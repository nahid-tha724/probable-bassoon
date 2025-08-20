#include<stdio.h>
int main(){
     int a,b,c;
     printf("Enter your desirable numbers:");
     scanf("%d %d %d",&a,&b,&c);
     if(a>b && a>c){
        printf("a is the largest number");
     }
     else if (a<b && b>c){
        printf("b is the largest number");
     }
     else if (a<c && b<c){
        printf("c is the largest number");
     }
     else{
        printf("All the number is equal");
     }
     return 0;
}
