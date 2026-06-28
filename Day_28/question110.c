#include<stdio.h>
struct Account{
    int acc_no;
    char name[50];
    char ifsc[20];
    float balance;
} acc;
void createaccount(struct Account acc[],int *n){
    printf("Enter your account number: ");
    scanf("%d",&acc[*n].acc_no);
    printf("Enter account holder name: ");
    scanf(" %[^\n]",acc[*n].name);
    printf("Enter IFSC code:");
    scanf("%s",acc[*n].ifsc);
    printf("Enter balance:");
    scanf("%f",&acc[*n].balance);

    (*n)++;
}
void displayaccount(struct Account acc[],int n){
    if(n==0){
        printf("No record found\n");
        return;
    }
    printf("***************BANK RECORD**************\n");
    for(int i=0;i<n;i++){
       printf("Account number : %d\n",acc[i].acc_no);
       printf("Account holder name %s\n",acc[i].name);
       printf("IFSC code: %s\n",acc[i].ifsc);
       printf("Balance: %f\n",acc[i].balance);
    }
}
void searchaccount(struct Account acc[], int n){
    int account_no;
    printf("Enter account number");
    scanf("%d",&account_no);
    int found=0;
    for(int i=0;i<n;i++){
        if(acc[i].acc_no==account_no){
            printf("BANK ACCOUNT FOUND");
            printf("Account number : %d\n",acc[i].acc_no);
            printf("Account holder name: %s\n",acc[i].name);
            printf("IFSC code: %s\n",acc[i].ifsc);
            printf("Balance: %f\n",acc[i].balance);
            found=1;
            break;

        }

    }
    if(found==0){
        printf("Account not found");
    }

}
void depositmoney(struct Account acc[],int n){
    int account_no, money;
    printf("Enter your account number: ");
    scanf("%d",&account_no);
    printf("Enter the amount of money you want to deposit: ");
    scanf("%d",&money);
    int found=0;
    for(int i=0;i<n;i++){
        if(acc[i].acc_no==account_no){
            found=1;
            acc[i].balance+=money;
            printf("Money deposited successfully!!\n");
            printf("Balance after deposit is %.2f",acc[i].balance);
            break;
        }
    }
    if (found==0){
        printf("Account not found\n");
    }

}
void withdrawmoney(struct Account acc[],int n){
    int account_no, money;
    printf("Enter your account number: ");
    scanf("%d",&account_no);
    printf("Enter the amount of money you want to withdraw: ");
    scanf("%d",&money);
    int found=0;
    for(int i=0;i<n;i++){
        if(acc[i].acc_no==account_no){
            found=1;
            if(acc[i].balance>=money){
                acc[i].balance-=money;
                printf("Money withdrawn successfully!!\n");
                printf("Balance after deposit is %.2f",acc[i].balance);

            }
            else{
                printf("Insufficent Balance\n");
            }
            break;    
        }
    }
    if (found==0){
        printf("Account not found\n");
    }

}

int main(){
    struct Account acc[100];
    int n=0;
    int choice;
do{    

    printf("*****************BANK ACCOUNT SYSTEM*******************\n");
    printf("1-Create Account\n");
    printf("2-Display Account\n");
    printf("3-Search Accoun\n");
    printf("4-Deposit Money\n");
    printf("5-Withdraw Money\n");
    printf("6-Exit\n");

    printf("Enter your chocie: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            createaccount(acc,&n);
            break;
        case 2:
            displayaccount(acc,n);
            break;    
        case 3:
            searchaccount(acc,n);
            break;  
        case 4:
            depositmoney(acc,n);
            break; 
        case 5:
            withdrawmoney(acc,n);
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