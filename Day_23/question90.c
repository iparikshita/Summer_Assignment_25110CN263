//first repeating character
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]={0};
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;

    }
    for(int i=0;str[i]!='\0';i++){
        if(freq[(unsigned char)str[i]]>1){
            printf("First repeating character %c\n",str[i]);
            return 0;
        }
    }
    printf("No repeating character found");
return 0;    


}