#include<stdio.h>
#include<math.h>
int main ( ) {
     float a=32,b=87,c=65,r1,r2,d,real,imaginary;
     d=b*b-4*a*c;
     if(d>0) {
        r1=-b/(2*a)+sqrt(d)/2*a;
        r2=-b/(2*a)-sqrt(d)/2*a;
        printf("The value of r1 and r2:\n%.2f\n%.2f");
     }
     else if(d==0) {
        r1=r2=-b/2*a;
        printf("r1=%.2f\n",r1);
        printf("r2=%.2f",r2);
     }
     else{
        real=-b/2*a;
        imaginary=sqrt(-d)/2*a;
        printf("r1=%.2f + %.2fi\n",real,imaginary);
        printf("r2=%.2f - %.2fi",real,imaginary);
     }
     return 0;
}
