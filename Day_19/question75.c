//transpose of matrix
#include<stdio.h>
int main(){
    int row;
    printf("Enter the number of rows");
    scanf("%d",&row);
    int col;
    printf("Enter the number of column");
    scanf("%d",&col);

    int arr[row][col];
    int transpose[col][row];
    printf("Enter the elements of array");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    printf("Transpose of the matrix is");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=arr[i][j];

        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }


return 0;

}