#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter size of first array");
    scanf("%d",&n1);
    printf("Enter size of second array");
    scanf("%d",&n2);
    int arr1[n1],arr2[n2];
    printf("Enter elements of first sorted array");
    for(int i=0;i<n1;i++){
        scanf("%d ",&arr1[i]);
    }
    printf("Enter elements of second sorted array");
    for(int j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }
    int arr3[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;

    }
    //remamining elements of first and second array
    while(i<n1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    printf("Merged sorted array is: ");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",arr3[i]);
    }
return 0;
}    
