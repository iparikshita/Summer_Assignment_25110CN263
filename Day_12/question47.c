#include<stdio.h>
int fibonnaci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int a=0,b=1,c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
    
}
int main(){
    int n;
    printf("Enter the term ");
    scanf("%d",&n);
    printf("Fibonnaci term is %d",fibonnaci(n));
    return 0;


}