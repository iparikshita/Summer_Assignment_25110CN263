#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the decimal number");
    scanf("%d",&n);
    while(n>0){
       if(n%2==1){
        count++;

       }
       n=n/2;
    }
    printf("Set bits in a number are %d",count);//number of 1 
}