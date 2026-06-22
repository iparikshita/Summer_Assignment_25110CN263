//character frequency
#include<stdio.h>
int main(){
    char str[100],ch;
    int count =0;
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to find frequency");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("Frequency of the character %c is %d",ch,count);
return 0;    
}