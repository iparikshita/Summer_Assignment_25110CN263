#include<stdio.h>
struct Employee{
    int ID;
    char name[50];
    int salary;
};
void addEmployee(struct Employee e[],int *n){
    printf("Enter employee ID");
    scanf("%d",&e[*n].ID);//displays value at given address
    printf("Enter employee name: ");
    scanf("%s",e[*n].name);
    printf("Enter employee salary: ");
    scanf("%d",&e[*n].salary);

    (*n)++;
    printf("\nEmployee added successfully\n");
    printf("n = %d\n",*n);

}
void displayEmployee(struct Employee e[],int n){
    printf("n= %d\n",n);
    if(n==0){
        printf("No records found");
        return;
    }
    printf("\n**************EMPLOYEE RECORDS*************\n");
    for(int i=0;i<n;i++){
        printf("Employee %d\n",i+1);
        printf("Employee ID %d\n",e[i].ID);
        printf("Employee name %s\n",e[i].name);
        printf("Employee salary %d\n",e[i].salary);

    }
}
void SearchEmployee(struct Employee e[],int n){
    int ID;
    int found=0;

    printf("\n Enter Employee ID: ");
    scanf("%d",&ID);
    for(int i=0;i<n;i++){
        if(e[i].ID==ID){
            printf("Employee found\n");
            printf("Employee %d\n",i+1);
            printf("Employee ID %d\n",e[i].ID);
            printf("Employee name %s\n",e[i].name);
            printf("Employee salary %d\n",e[i].salary);
            found=1;
            break;

        }
    }
    if(found==0){
        printf("Employee not found\n");
    }
}
void UpdateEmployee(struct Employee e[],int n){
    int ID;
    int found=0;

    printf("\n Enter Employee ID: ");
    scanf("%d",&ID);
    for(int i=0;i<n;i++){
        if(e[i].ID==ID){
            printf("Enter new salary\n");
            scanf("%d",&e[i].salary);

            printf("Salary Updated Successfully\n");
            found=1;
            break;

        }
    }
    if(found==0){
        printf("Employee not found\n");
    }

}
int main(){
    
    struct Employee e[100];
    int n=0;
    int choice;
do
{    
    printf("\n1-Add Employee\n");
    printf("\n2-Display Employees\n");
    printf("\n3-Search Employee\n");
    printf("\n4-Update Employee\n");
    printf("\n5-Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
           addEmployee(e,&n);//sends address
           break;
        case 2:
           printf("Inside case 2");
           displayEmployee(e,n);
           break;
        case 3:
           SearchEmployee(e,n);
           break;
        case 4:
            UpdateEmployee(e,n);
            break;
        case 5:
            printf("Thank you for using Employee Mangement System");
            break;
        default:
            printf("Invalid choice"); 
    }                     
}while (choice!=5);
return 0;    
}   
