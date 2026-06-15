//move zeros to end 
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
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        printf("Array after moving zeros to end:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ", arr[i]);
        }
 
        return 0;

    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;

        }
    }
    
    printf("Array after moving zeros to end:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;    
 
}   
