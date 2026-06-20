//symmetric matrix(matrix equal to its transpose)
#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the number of rows and columns of first matrix");
    scanf("%d %d",&r1,&c1);
    int A[r1][c1];
    if(r1!=c1){
        printf("Not symmetric matrix");
        return 0;
    }
    printf("Enter array elements");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int symmetric=1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           if(A[i][j]!=A[j][i]){
            symmetric=0;
            break;

        }
        }
    }
    if(symmetric){
        printf("Symmetric matrix");
    }
    else{
        printf("Not symmetric matrix");
    }
return 0;    
}