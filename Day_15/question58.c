//rotate array left
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
    
    int d;
    printf("Enter the number of places to rotate array left");
    scanf("%d",&d);
    d=d%n;
    //put elements in temp
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //shift rest elements to start
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //put temp elements in array
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }

    printf("Rotated array is :");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
return 0;    
}