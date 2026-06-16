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
    int maxfreq=0;
    int element;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            element=arr[i];
        }
    }
    printf("Max frequecy element is %d \n", element);
    printf("Frequency is %d", maxfreq);
return 0;    
}