//anagram strings: contain same characters with same frequency
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    int freq[256]={0};
    printf("Enter first string");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string");
    fgets(str2,sizeof(str2),stdin);
    if(strlen(str1)!=strlen(str2)){
        printf("Not anagram strings\n");
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++){
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
        //count becomes 0
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("Not anagram strings");
            return 0;
        }
    }
    printf("Anagram strings\n");
return 0;    
    
}
