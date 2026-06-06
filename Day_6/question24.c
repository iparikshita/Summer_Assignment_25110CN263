#include<stdio.h>
int main(){
    int x,n,result=1;
    printf("Enter exponent");
    scanf("%d",&x);
    printf("Enter power");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        result=result*x;

    }
    printf("The value of x^n is %d",result);
return 0;    
}