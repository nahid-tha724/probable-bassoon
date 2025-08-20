#include<stdio.h>
int main() {
     int num=-7;
     if(num<0){
        num=(-1)*num;
        printf("Number is %d\n",num);
     }
     else{
        printf("Number is %d\n",num);
     }
     return 0;
}
