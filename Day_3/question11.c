#include<stdio.h>
int main(){
    int a,b,min,gcd=1;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }

    }
    printf("Greatest common divisor is: %d",gcd);
return 0;    

}