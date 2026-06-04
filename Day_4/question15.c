#include<stdio.h>
int main(){
    int n,digit,num=0,temp;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        digit=n%10;
        num+=digit*digit*digit;
        n=n/10;

    }
    if(temp==num){
        printf("Armstrong number");
    }
return 0;    
}