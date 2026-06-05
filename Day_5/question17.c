#include<stdio.h> //perfectnumber
int main(){
    int n,sum=0;
    printf("Enter a number"); //A number whose sum of proper factors is equal to the number itself.
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;

        }
    }
    if(n==sum){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
return 0;    

}