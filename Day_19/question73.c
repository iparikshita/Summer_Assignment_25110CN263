//add two matrices 
//must be of same size
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the row and column of the matrices");
    scanf("%d %d", &row,&col);
    int A[row][col],B[row][col],C[row][col];
    printf("Enter elements of first matrix ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of second matrix ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Sum of matrices is: \n");
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",C[i][j]);

        }
        printf("\n");
    }    
return 0;    

   
}