double power(double x, int n);
int main ( ) {
     double x=2;
     int n=5;
     double result = power(x,n);
     printf("%lf",result);
}
double power(double x, int n) {
           if(n==0) {
            return 1;
           }
           return x*power(x,n-1);
}
