#include<stdio.h>
int main(){
    int n,start,end,isPrime=1;
    printf("Enter the starting point");
    scanf("%d",&start);
    printf("Enter ending point");
    scanf("%d",&end);
    printf("Prime numbers are: ");

    for(int n=start;n<=end;n++){
        isPrime=1;
        if(n<=1){
            isPrime=0;
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime){
            printf(" %d", n);
        }
    }
return 0;    
}