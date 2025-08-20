#include<stdio.h>
int main ( ) {
     int row,col,i,j;
     printf("Enter the size of matrix:\n");
     scanf("%d %d",&row,&col);
     int A[row] [col];
     printf("Enter the values of matrix:\n");
     for(i=0;i<row;i++) {
        for(j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
     }

     printf("The Matrix\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
     }
     return 0;
}
