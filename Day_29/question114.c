#include<stdio.h>
int main(){
    int arr[100],n;
    int choice,pos,element,found=0;
    int largest,smallest;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

do{
    printf("\n***********MENU DRIVEN ARRAY OPERATIONS SYSTEM***********\n");
    printf("1- Insert an element\n");
    printf("2- Delete an element\n");
    printf("3- Search an element\n");
    printf("4- Display array\n");
    printf("5-Find largest element\n");
    printf("6- Find smallest element\n");
    printf("7- Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter position");
            scanf("%d",&pos);
            printf("Enter an element: ");
            scanf("%d",&element);
            if(pos<1 || pos>n+1){
                printf("Invalid position\n");
            }
            else{
                for(int i=n-1;i>=pos-1;i--){
                    arr[i+1]=arr[i];//shift elements to right

                }
                arr[pos-1]=element;
                n++;
                printf("Element inserted successfully!!\n");
            }
            break;
        case 2:
            printf("Enter position to delete: ");
            scanf("%d",&pos);
            if(pos<1 || pos>n){
                printf("Invalid position\n");
            }
            else{
                for(int i=pos-1;i<n-1;i++){
                    arr[i]=arr[i+1];
                }
                n--;
                printf("Element deleted successfully!!\n");
            }
            break;


        case 3:
            printf("Enter the element you want to search: ");
            scanf("%d",&element);
            found=0;
            for(int i=0;i<n;i++){
                if(arr[i]==element){
                    printf("The element %d is present at position %d\n",element,i+1);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Element not found\n");
            }
            break;
        case 4:
            printf("The array is:\n ");
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
            }
            break;
        case 5:
            largest=arr[0];
            for(int i=0;i<n;i++){
                if(arr[i]>largest){
                    largest=arr[i];
                }
                printf("The largest element is %d \n",largest);
            } 
            break;
        case 6:
            smallest=arr[0];
            for(int i=0;i<n;i++){
                if(arr[i]<smallest){
                   smallest=arr[i];
                }
                printf("The smallest element is %d\n ",smallest);
            }
            break;
        case 7:
            printf("Thank you");
            break;
        default: 
            printf("Invalid choice");    
                 
        }
}while(choice!=7);

return 0;
}  
