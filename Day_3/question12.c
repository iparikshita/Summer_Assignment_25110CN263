#include<stdio.h>
int main(){
    int a,b,max,lcm;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    if(a>b){
        max=a ;
    }
    else{
        max= b;
    }
    while(1){
        if(max%a==0 && max%b==0){
            lcm=max;
            break;
        }
        max++;
    }
    printf("Least common multiple is: %d", lcm);
return 0;    

}