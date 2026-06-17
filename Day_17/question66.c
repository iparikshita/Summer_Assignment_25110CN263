#include<stdio.h>
int main(){
    int n1; //union of arrays
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
    printf("Union of the given arrays is: ");
    //print first array
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    //check for elements different in arr2
    for(int i=0;i<n2;i++){
        int found=0;
        for(int j=0;j<n1;j++){

        if (arr2[i]==arr1[j]){
            found=1;
            break;
        }
    }
    if(found==0){
        printf("%d ",arr2[i]);
    }
}
return 0;
}    