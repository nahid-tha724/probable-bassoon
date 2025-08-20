#include<stdio.h>
#include<math.h>
int main( ) {
     int x1,x2,y1,y2,d,answer;
     printf("Enter values of two points: ");
     scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
     d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
     answer=sqrt(d);
     printf("The distance between two points:%d",answer);
     return 0;
}
