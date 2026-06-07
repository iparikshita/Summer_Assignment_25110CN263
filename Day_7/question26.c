#include<stdio.h>
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    printf("Enter the length of series");
    scanf("%d",&n);
    printf("Fibonacci series is: ");
    for(int i=1;i<=n;i++){
        printf(" %d ", fibonacci(i));
    }

    return 0;
}