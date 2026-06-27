#include<stdio.h>
//HRA 20% of basic salary
//DA 10% of basic salary
//gross salary=HRA+DA+basicsalary
struct Employee{
    int ID;
    char name[50];
    int basic_salary;
    int hra;
    int da;
    int gross_salary;
};
void addEmployee(struct Employee e[],int *n){
    printf("Enter employee ID");
    scanf("%d",&e[*n].ID);//displays value at given address
    printf("Enter employee name: ");
    scanf("%s",e[*n].name);
    printf("Enter employee basic salary: ");
    scanf("%d",&e[*n].basic_salary);

    (*n)++;

}
void calculate_salary(struct Employee e[],int n){
    if(n==0){
        printf("No records found");
        return;
    }    
    for(int i=0;i<n;i++){
        e[i].hra=e[i].basic_salary*0.20;
        e[i].da=e[i].basic_salary*0.10;
        e[i].gross_salary=e[i].basic_salary+e[i].hra+e[i].da;

    }
    printf("Salary calculated successfully");
}    
    
void displayEmployee(struct Employee e[],int n){
    if(n==0){
        printf("No records found");
        return;
    }
    printf("\n**************EMPLOYEE RECORDS*************\n");
    for(int i=0;i<n;i++){
        printf("Employee %d\n",i+1);
        printf("Employee ID %d\n",e[i].ID);
        printf("Employee name %s\n",e[i].name);
        printf("Employee salary %d\n",e[i].basic_salary);
        printf("HRA %d\n",e[i].hra);
        printf("DA %d\n",e[i].da);
        printf("Gross salary %d \n",e[i].gross_salary);

    }
}
int main(){
    struct Employee e[100];

    int n = 0;
    int choice;

    do
    {
        printf("\n******** SALARY MANAGEMENT SYSTEM ********\n");
        printf("1. Add Employee\n");
        printf("2. Calculate Salary\n");
        printf("3. Display Salary Details\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee(e, &n);
                break;

            case 2:
                calculate_salary(e, n);
                break;

            case 3:
                displayEmployee(e, n);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);
return 0;
}
