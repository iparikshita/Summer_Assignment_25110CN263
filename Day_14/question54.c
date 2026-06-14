#include<stdio.h>
int frequency(int arr[],int size,int element){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count++;

        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int element;
    printf("Enter the element to know its frequency");
    scanf("%d",&element);
    int frequencyindex=frequency(arr,n,element);
    if(frequencyindex==0){
        printf("Element not found");
    }
    else{
        printf("The frequency of element %d is %d",element,frequencyindex);
    }
    return 0;


}