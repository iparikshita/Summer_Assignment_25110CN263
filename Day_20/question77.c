//multiply two matrices 
#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    //Input dimensions of first matrix 
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d",&r1,&c1);
    //Input dimemsions of second matrix
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d",&r2,&c2);
    //check if multiplication possible
    if(c1!=r2){
        printf("Matrix Multiplication is not possible\n");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];
    printf("Enter the elements of first array: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of second array: ");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
            for(int k=0;k<c1;k++){

                C[i][j]+=A[i][k]*B[k][j];
            }    
        }
    }    
    printf("Resultant matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }
return 0;
}   