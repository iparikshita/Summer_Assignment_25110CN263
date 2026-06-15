//rotate array right
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
    printf("Enter the number of places to rotate array right");
    scanf("%d",&d);
    d=d%n;
    int temp[d];
    //store element is temp
    for(int i=0;i<d;i++){
        temp[i]=arr[n-d+i];
    }
    //shift rest elements towards last
    for(int i=n-1;i>=d;i--){
        arr[i]=arr[i-d];
    }
    //put temp elements back to array
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
    printf("Rotated array is :");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
return 0;    
}    
