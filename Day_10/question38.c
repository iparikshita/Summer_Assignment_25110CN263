#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            printf("*");
        }
        //spaces
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");

    }
return 0;    

}