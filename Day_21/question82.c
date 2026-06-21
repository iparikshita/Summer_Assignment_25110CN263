#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("Reversed String is ");
    for(int i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
return 0;
}    
