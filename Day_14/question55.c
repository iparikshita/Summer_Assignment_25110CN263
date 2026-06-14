#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
        largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];

        }
    }
    printf("Second largest element is %d ", second_largest);
    return 0;

}