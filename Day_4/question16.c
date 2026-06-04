#include<stdio.h>
int main(){
    int start,end,digit;
    printf("Enter starting");
    scanf("%d",&start);
    printf("Enter ending");
    scanf("%d",&end);
    printf("Armstrong numbers are ");
   
    for(int i=start;i<=end;i++){
        int temp=i;
        int num=0;

        while(temp!=0){
        
        digit=temp%10;
        num+=digit*digit*digit;
        temp=temp/10;
        }
        if(i==num){
            printf(" %d ", i);
        }
    }
      
return 0;        


}