#include<stdio.h>
int main(){
    int n; 
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int found=0;
    int sum;
    printf("Enter the sum");
    scanf("%d",&sum);
    printf("The possible pairs are: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n ",arr[i],arr[j]);
                found=1;

            }
        }
        
    }
    if(found==0){
        printf("No pair found");
    }
return 0;
}