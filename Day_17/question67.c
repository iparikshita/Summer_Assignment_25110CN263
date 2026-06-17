#include<stdio.h>
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
    printf("Intersection of the given arrays is: ");//elements present in both array
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){

        if (arr1[i]==arr2[j]){
            printf("%d ",arr1[i]);
            break;
        }
        }
    }
return 0;    
}    