#include<stdio.h>
int main(){
   printf("WELCOME TO THE ATM\n");
   float balance;
   printf("Enter your balance");
   scanf("%f",&balance);
   int choice;
   float amount,withdraw;
   
   
       

   do{
   printf("1: Check your balance\n");
   printf("2: Deposit\n");
   printf("3: Withdraw\n");
   printf("4: Exit\n");
   printf("Enter your choice:");
   scanf("%d",&choice);

   switch(choice)
   {
   case 1:
      printf("your balance is %.2f\n",balance);
      break;

   case 2:
      printf("To deposit money enter the amount:");
      scanf("%f",&amount);
      printf("Balance after amount is added=");
      balance=balance+amount;
      printf("%.2f\n",balance);
      break;   
    
   case 3:
      printf("Enter the amount of money you want to withdraw\n");
      scanf("%f",&withdraw);
      if(withdraw<=balance){
         balance=balance-withdraw;
         printf("Balance after withdrawl is %.2f\n",balance);
      }
      else{
        printf("Insufficient balance\n");
      }
      break;
   case 4:
      printf("Thank you for visiting the ATM\n");
      break; 
   default:
      printf("Invalid choice\n");
      break;     
   }   
   }while(choice!=4);

  
return 0;
}