#include<stdio.h>
int Binary_Search(int arr[],int size,int element){
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       
    }
return -1;    
}

int main(){
    int arr[] = {1, 2, 4, 9, 15, 36, 98};
    int n = sizeof(arr) / sizeof(int);
    int element = 36;

    int searchindex = Binary_Search(arr, n, element);

    if (searchindex!= -1){
        printf("The element %d is found at index %d\n",element, searchindex);
    }
    else{
        printf("Element not found\n");
    }
return 0;
}