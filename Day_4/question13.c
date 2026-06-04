#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of series");
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("Fibonnaci series is 0 1 ");
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
        

    }
return 0;    
  

}