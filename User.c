#include<stdio.h>
int main () {
     int num,c,r,s,area,radius,length,width;
     printf("Which one do you prefer?\n1. Circle\n2. Rectangle\n3. Square ");
     scanf("%d", &num);
     if(num==1){
        printf("Enter your desirable radius:");
        scanf("%d", &radius);
        area=3.1416*radius*radius;
        printf("Area of the Circle: %d",area);
     }
     else if(num==2){
        printf("Enter your two desirable length and width:");
        scanf("%d %d",&length,&width);
        area=length*width;
        printf("Area of the rectangle: %d",area);
     }
     else {
        printf("Enter your desirable length:");
        scanf("%d",&length);
        area=length*length;
        printf("Area of the square: %d",area);
     }
     return 0;
}
