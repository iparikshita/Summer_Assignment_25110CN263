//find longest word
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],longest[50];
    int len=0,max_len=0,start=0;
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]=='\0'||str[i]=='\n'){
            if(len>max_len){
                max_len=len;
                strncpy(longest,&str[start],max_len);
                longest[max_len]='\0';

            }
            start=i+1;
            len=0;
        }
        else{
            len++;
        }
        if(str[i]=='\0'){
            break;
        }

    }
    printf("Longest Word %s\n:",longest );
    printf("Length %d",max_len);
return 0;
}    

