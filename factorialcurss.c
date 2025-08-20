int factorial (int n) ;
int main ( ) {
     int n=5, result;
     result = factorial(n);
     printf("%d", result);
}
int factorial (int n) {
     if(n==1){
        return 1;
     }
     return n*factorial (n-1);
}
