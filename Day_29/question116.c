#include<stdio.h>
struct item{
    int id;
    char name[50];
    int quantity;
    int price;

};
int main(){
    struct item item[100];
    int n=0,choice;
    int searchid, i;
do{
    printf("\n******** INVENTORY MANAGEMENT SYSTEM ********\n");
    printf("1. Add Item\n");
    printf("2. Display Items\n");
    printf("3. Search Item\n");
    printf("4. Update Quantity\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf(" %[^\n]", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%d", &item[n].price);

            n++;
            break;

        case 2:
            for(int i=0;i<n;i++){
               printf("ITEM ID: %d\n",item[i].id);
               printf("Item name: %s\n",item[i].name);
               printf("Quanity: %d\n",item[i].quantity);
               printf("Price %d\n",item[i].price);
            }
            break;  
        case 3:
            printf("Enter Item ID to search: ");
            scanf("%d", &searchid);

            for(i= 0; i< n; i++) {
                if(item[i].id == searchid) {
                    printf("ID: %d\n", item[i].id);
                    printf("Name: %s\n", item[i].name);
                    printf("Quantity: %d\n", item[i].quantity);
                    printf("Price: %d\n", item[i].price);
                    break;
                }
            }

            if(i== n)
                printf("Item not found!\n");

            break;  
        case 4:
            printf("Enter Item ID: ");
            scanf("%d", &searchid);

            for(i = 0; i< n; i++) {
                if(item[i].id == searchid) {
                    printf("Enter New Quantity: ");
                    scanf("%d", &item[i].quantity);
                    printf("Quantity Updated Successfully!\n");
                    break;
                }
            }

            if(i == n)
                printf("Item not found!\n");

            break;

        case 5:
            printf("Thank you\n");
            break;
            
        default:
            printf("Invalid choice\n");    
      
    }
}while(choice!=5);
return 0;    
}