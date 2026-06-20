//row wise sum
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
    for(int i=0;i<r1;i++){
        int sum=0;
        for(int j=0;j<c1;j++){
            sum+=A[i][j];

        }
        printf("Sum of row %d is %d\n", i+1,sum);
    }

return 0;
}  
