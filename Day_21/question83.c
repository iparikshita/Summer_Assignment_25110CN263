//count vowels and consonants
#include<stdio.h>
int main(){
    int vowels=0;
    int consonants=0;
    char str[100];
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
            ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                vowels++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            consonants++;
        }
    }
    printf("Vowels=%d\n", vowels);
    printf("Consonants=%d\n",consonants);
return 0;

}    