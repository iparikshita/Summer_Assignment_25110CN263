#include<stdio.h> //strong number 
int main(){
     int n,digit,sum=0;
     printf("Enter a number");//A number whose sum of factorials of its digits is equal to the number itself.
     scanf("%d",&n);
     int temp=n;
     while(n!=0){
          digit=n%10;
          int fact=1;
          for(int i=1;i<=digit;i++){
               fact=fact*i;
          }
          sum+=fact;
          n=n/10;



     }
     if(temp==sum){
          printf("Strong number");
     }
     else{
          printf("Not a strong number");
     }
return 0;     

}