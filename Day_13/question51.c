#include<stdio.h>
int main(){
    int n;                      //largest and smallest element
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];  
    printf("Enter Array Elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    } 
    printf("Largest element is %d ", largest);
    printf("Smallest element is %d ",smallest );
return 0;    
}    
