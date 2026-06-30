//mini employee management system
#include<stdio.h>
int main(){
    int id[100];
    char name[100][50];
    int salary[100];
    int n,choice,found,searchid;
    printf("Enter the number of employee: ");
    scanf("%d",&n);
do{
    printf("\n**************MINI EMPLOYEE MANAGEMENT SYSTEM**************\n");
    printf("1- Add employee\n");
    printf("2-Display employee\n");
    printf("3-Search employee\n");
    printf("4-Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
           for(int i=0;i<n;i++){
              printf("Employee : %d\n",i+1);
              printf("Enter employee id: ");
              scanf("%d",&id[i]);
              printf("Enter employee name: ");
              scanf(" %[^\n]",name[i]);
              printf("Enter salary: ");
              scanf("%d",&salary[i]);

           }
           break;
        case 2:
            for(int i=0;i<n;i++){
                printf("Employee %d\n",i+1);
                printf("Employee ID %d\n",id[i]);
                printf("Employee name %s\n",name[i]);
                printf("Employee salary %d\n",salary[i]);
            }
            break;
        case 3:
            printf("Enter employee id: ");
            scanf("%d",&searchid);
            found=0;
            for(int i=0;i<n;i++){
                if(searchid==id[i]){
                    printf("Employee found\n");
                    printf("Employee ID %d\n",id[i]);
                    printf("Employee name %s\n",name[i]);
                    printf("Employee salary %d\n",salary[i]);
                    found=1;
                    break;

                }    

            }
            if(found==0){
                printf("Employee not found\n");
            }
            break;
        case 4:
            printf("Thank you\n");
            break;
        default:
            printf("Invalid choice\n");        
    }      

    
}while (choice!=4);
return 0; 

    
}