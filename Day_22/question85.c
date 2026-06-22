#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string");
    scanf("%s",&str);
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    int pallindrome=1;
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            pallindrome=0;
            break;


        }
    }
    if(pallindrome){
        printf("Pallindrome string");
    }
    else{
        printf("Not a Pallindrome string");
    }
return 0;    
}    