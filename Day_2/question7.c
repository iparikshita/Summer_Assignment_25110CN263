#include<stdio.h>
int main(){
    int n, mul=1,digit;
    printf("Enter a number");
    scanf("%d",&n);
    if(n==0){
        mul=0;
    }
    else{
    while(n!=0){
        digit=n%10;
        n=n/10;
        mul=mul*digit;

    }
    }
    printf("The product of digits is: %d", mul);
return 0;    
}