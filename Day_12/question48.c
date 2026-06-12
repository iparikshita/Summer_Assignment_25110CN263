#include<stdio.h>
int perfectnumber(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        return 1;

    }
    else{
        return 0;
    }
}    
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(perfectnumber(n)==1){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }

    return 0;
}    
