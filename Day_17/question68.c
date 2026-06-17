#include<stdio.h>
//common elements avoids printing duplicate elements
int main(){
    int n1; 
    printf("Enter the size of array");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter array elements");
    for(int i=0;i<n1;i++){
       scanf("%d",&arr1[i]);
    }
    int n2; 
    printf("Enter the size of array");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter array elements");
    for(int i=0;i<n2;i++){
       scanf("%d",&arr2[i]);
    }
    printf("Common elements are ");
    //check if duplicates in array
    for(int i=0;i<n1;i++){
        int found=0;
        for(int k=0;k<i;k++){
            if(arr1[i]==arr1[k]){
                found=1;
                break;
            }
        }
        if(found) continue;
    
    for(int j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
            printf("%d ",arr1[i]);
            break;
        }
    }
    }
return 0;    
}
