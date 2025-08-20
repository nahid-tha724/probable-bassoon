#include<stdio.h>
int main ( ) {
     int A[3] [3], B [3] [3], C[3] [3],i,j,row,col;
     printf("Enter the number of rows and columns:\n");
     scanf("%d %d",&row,&col);
     //Input the first matrix
     printf("Enter the first matrix\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
     }
     //Input the second matrix
     printf("Enter the second matrix\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&B[i] [j]);
        }
     }
     //Addition of two matrix
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
     }
     //Display Result
     printf("Result of the matrix\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
     }
     return 0;
}
