//count words in a sentence
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    int words=0;
    for(int i=0;str[i]!='\0';i++){
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
        (i > 0 && str[i] != ' ' && str[i] != '\n' &&
        (str[i - 1] == ' ' || str[i - 1] == '\n'))){
            words++;
        }
        
    }    
    printf("Number of words: %d\n",words);
return 0;    
}