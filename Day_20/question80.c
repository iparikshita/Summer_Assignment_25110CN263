//column wise sum
#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the number of rows and columns of first matrix");
    scanf("%d %d",&r1,&c1);
    int A[r1][c1];
    printf("Enter array elements");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int j=0;j<c1;j++){
        int sum=0;
        for(int i=0;i<r1;i++){
            sum+=A[i][j];

        }
        printf("Sum of column %d is %d\n", j+1,sum);
    }
return 0;    
}       
