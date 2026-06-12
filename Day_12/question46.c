#include<stdio.h>
int Armstrong(int n){
    int digit,temp=n,sum=0;
    while(n!=0){
        digit=n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
    if(temp==sum){
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
    if(Armstrong(n)==1){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }
return 0;    


}