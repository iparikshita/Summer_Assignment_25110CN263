#include<stdio.h>
struct library{
    int id;
    char title[50];
    char author[50];
    int quantity;
} lib;

void addbook(struct library lib[],int *n){
    printf("Enter book id\n");
    scanf("%d",&lib[*n].id);
    printf("Enter book title\n");
    scanf(" %[^\n]",lib[*n].title);
    printf("Enter the author\n");
    scanf(" %[^\n]",lib[*n].author);
    printf("Enter book quantity");
    scanf("%d",&lib[*n].quantity);

    (*n)++;
}
void displaybook(struct library lib[],int n){
    if(n==0){
        printf("No record found\n");
        return;
    }
    printf("***************LIBRARY RECORD**************\n");
    for(int i=0;i<n;i++){
       printf("Book id number : %d\n",lib[i].id);
       printf("Book title: %s\n",lib[i].title);
       printf("Book author: %s\n",lib[i].author);
       printf("Quantity of book: %d\n",lib[i].quantity);
    }
}
void searchbook(struct library lib[],int n){
    int bookid;
    printf("Enter book id");
    scanf("%d",&bookid);
    int found=0;
    for(int i=0;i<n;i++){
        if(lib[i].id==bookid){
            printf("BOOK FOUND");
            printf("Book id number : %d\n",lib[i].id);
            printf("Book title: %s\n",lib[i].title);
            printf("Book author: %s\n",lib[i].author);
            printf("Quantity of book: %d\n",lib[i].quantity);
            found=1;
            break;

        }

    }
    if(found==0){
        printf("Book not found");
    }

}
void issuebook(struct library lib[],int n){
    int bookid;
    printf("Enter the book id you want to issue: \n");
    scanf("%d",&bookid);
    int found=0;
    for(int i=0;i<n;i++){
        if(lib[i].id==bookid){
            found=1;
            if(lib[i].quantity>0){
                lib[i].quantity--;
                printf("Book Issued Successfully!\n");
                printf("Books Left: %d\n", lib[i].quantity);
            }
            else{
                printf("Book Not Available!\n");
            }
            break;
        }
       
    }
    if(found==0){
        printf("Book not found");
    }        
}
void returnbook(struct library lib[],int n){
    int bookid;
    int found=0;
    printf("Enter the book id you want to return: \n");
    scanf("%d",&bookid);
    for(int i=0;i<n;i++){
        if(lib[i].id==bookid){
            found=1;
            lib[i].quantity++;
            printf("BOOK returned");
            printf("Quantity left: %d\n",lib[i].quantity);
            break;
        }
    }
    if (found==0){
        printf("Book not found!!\n");
    }
}
int main(){
    struct library lib[100];
    int n=0;
    int choice;
do{    

    printf("*****************LIBRARY MANAGEMENT SYSTEM*******************\n");
    printf("1-Add books\n");
    printf("2-Display books\n");
    printf("3-Search book\n");
    printf("4-Issue book\n");
    printf("5-Return book\n");
    printf("6-Exit\n");

    printf("Enter your chocie: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            addbook(lib,&n);
            break;
        case 2:
            displaybook(lib,n);
            break;    
        case 3:
            searchbook(lib,n);
            break;  
        case 4:
            issuebook(lib,n);
            break; 
        case 5:
            returnbook(lib,n);
            break;
        case 6:
            printf("Thank you!");
            break;
        default:
            printf("Invalid choice\n");
                
                        
    }

}while (choice!=6);
return 0;
}