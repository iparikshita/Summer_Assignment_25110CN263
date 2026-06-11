#include<stdio.h>
int maximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Maximum number is %d",maximum(a,b));
return 0;    
}