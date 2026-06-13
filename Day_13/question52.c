#include<stdio.h>
int main(){
int n,even_count=0,odd_count=0;                      
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];  
    printf("Enter Array Elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("Number of even elements are : %d ",even_count);
    printf("Number of odd elements are : %d ",odd_count);
return 0;    
}  