//remove duplicates from array
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
    printf("Array after removing duplicates");
    for(int i=0;i<n;i++){
        int duplicate =0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }

        }
    
    if(duplicate==0){
        printf("%d ",arr[i]);
    }
}
return 0;  
}