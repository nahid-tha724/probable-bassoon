#include<stdio.h>
int main() {
    int number, sum = 0;
    scanf("%d",&number);
    while(number>0 && number<100) {
        sum=sum+number;
        scanf("%d",number);
    }
    printf("Sum of user-entered numbers:%d",sum);
    return 0;
}

