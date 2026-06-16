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
    int sum=((n+1)*(n+2)/2);
    int s2=0;
    for(int i=0;i<n;i++){
        s2+=arr[i];

    }
    printf("The missing element is %d ", sum-s2);
return 0;
    
}