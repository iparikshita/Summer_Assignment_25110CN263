#include<stdio.h>
int main(){
    int n,isPrime=1;
    printf("enter a number");
    scanf("%d", &n);
    if(n<=1){
        printf("Not a prime number"); 
    }
    else{
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    
    if(isPrime){
        printf("Prime number");
    }
    
    else{
        printf("Not a Prime Number");
    }
    }
return 0;    
}