#include<stdio.h>
int main(){
    int n1; //merge two arrays
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
    int arr3[n1+n2];
    int k=0;
    for(int i=0;i<n1;i++){
        arr3[k]=arr1[i];
        k++;
    }
    for(int i=0;i<n2;i++){
        arr3[k]=arr2[i];
        k++;
    }
    printf("Merged array is: ");
    for(int k=0;k<(n1+n2);k++){
        printf("%d ",arr3[k]);
    }
    
return 0;  

}    
