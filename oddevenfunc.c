#include<stdio.h>
void checkevenodd(int n) {
       if(n%2 == 0){
        printf("even");
       }
       else {
        printf("odd");
       }
}
void main ( ){
        int n;
        scanf("%d",&n);
        checkevenodd(n);
        return 0;
}
