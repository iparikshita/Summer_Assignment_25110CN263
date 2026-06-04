#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter nth term");
    scanf("%d",&n);
    if(n==1){
        printf("Nth Fibonnaci term is %d",a);
    }
    else if(n==2){
        printf("Nth Fibonnaci terms is %d",b);
    }
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("Nth Fibonnaci term is %d",c);
    }
return 0;    
    
}