#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int largestPrimeFactor= -1;

    for(int i=2;i<=n;i++){
        if(n%i==0){
            int isPrime=1;

            for(int j=2;j<i;j++){
                if(i%j==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime){
                largestPrimeFactor=i;
            }
        }

    }
    printf("Largest Prime Factor is %d ", largestPrimeFactor);
return 0;
}