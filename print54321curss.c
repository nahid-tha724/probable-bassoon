void countdown(int n);
int main ( ) {
     countdown(5);
}
void countdown(int n) {
        if(n==0)
            return 0;
        printf("%d ",n);
        countdown(n-1);
}
