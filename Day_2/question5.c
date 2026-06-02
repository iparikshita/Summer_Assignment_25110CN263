#include<stdio.h>
int main(){
    int n,sum=0,num;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0){
        num=n%10;
        n=n/10;
        sum+=num;

        
    }
    printf("Sum of digits is %d",sum);
return 0;    
}