#include<stdio.h>
int main(){
    int n,sum=0;
    float average;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }    
        average=(float)sum/n;
    
    printf("Sum of array eleemts are %d \n" , sum);
    printf("Average of array elemts are %f", average);
return 0;    
}