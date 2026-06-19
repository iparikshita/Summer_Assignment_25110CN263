#include<stdio.h>
//find diagonal sum(square matrix)
int main(){
    int row;
    printf("Enter the number of rows");
    scanf("%d",&row);
    int col;
    printf("Enter the number of column");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter the elements of array");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    int sum=0;
    for(int i=0;i<row;i++){
       
        sum+=arr[i][i];
    }
    printf("%d",sum);

return 0;
}