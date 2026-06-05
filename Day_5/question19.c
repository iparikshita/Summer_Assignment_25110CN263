#include<stdio.h> //to print factors 
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Factors of this number are: ");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf(" %d", i);
        }
    }
return 0;
}