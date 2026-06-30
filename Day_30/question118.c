#include<stdio.h>
int main(){
    int bookid[100];
    char booktitle[100][50];
    char author[100][50];
    int quantity[100];
    int n,choice,searchid;
    int found;
    printf("Enter the number of books\n: ");
    scanf("%d",&n);

do{    

    printf("*****************LIBRARY SYSTEM*******************\n");
    printf("1-Add books\n");
    printf("2-Display books\n");
    printf("3-Search book\n");
    printf("4-Exit\n");

    printf("Enter your chocie: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
           for(int i=0;i<n;i++){
               printf("BOOK NUMBER:%d ",i+1);
               printf("Enter the book id : ");
               scanf("%d",&bookid[i]);
               printf("Enter book title: ");
               scanf(" %[^\n]",booktitle[i]);
               printf("Enter the author of this book");
               scanf(" %[^\n]",author[i]);
               printf("Enter quantity: ");
               scanf("%d",&quantity[i]);

           }
           break;
        case 2:
           for(int i=0;i<n;i++){
               printf("Book number:%d\n ",i+1);
               printf("Book id: %d\n",bookid[i]);
               printf("Book title: %s\n",booktitle[i]);
               printf("Book author: %s\n",author[i]);
               printf("Quantity: %d\n",quantity[i]);
           } 
           break;
        case 3:
            printf("Enter the book id you want to search");
            scanf("%d",&searchid);
            found=0;
            for(int i=0;i<n;i++){
                if(bookid[i]==searchid){
                    printf("Book found\n");
                    printf("Book id: %d\n",bookid[i]);
                    printf("Book title: %s\n",booktitle[i]);
                    printf("Book author: %s\n",author[i]);
                    printf("Quantity: %d\n",quantity[i]);

                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Book not found");
            }
            break;
        case 4:
            printf("Thank you\n");
        default:
            printf("Invalid choice\n");   
          
    } 
}while (choice!=4);      
return 0;
}