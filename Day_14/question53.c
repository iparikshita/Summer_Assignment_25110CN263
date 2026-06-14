#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
        return i;
        }
    }
    return -1;
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
    printf("Enter the element you want to search");
    scanf("%d",&element);
    
    int searchindex=linearsearch(arr,n,element);
    if(searchindex==-1){
        printf("Element not found");
    }
    else{
        printf("The element %d is found at index %d",element,searchindex);

    }
  
    return 0;

}
