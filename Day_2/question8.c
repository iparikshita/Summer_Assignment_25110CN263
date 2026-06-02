#include<stdio.h>
int main(){
    int n, rev=0, digit,num;
    printf("Enter a number");
    scanf("%d",&n);
    num=n;   //original number
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    if(num==rev){
        printf("The number is a palindrome ");
    }
    else{
        printf("The number is not a palindrome");
    }
}