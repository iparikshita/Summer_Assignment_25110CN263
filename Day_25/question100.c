#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the number of words");
    scanf("%d",&n);
    char words[n][50];
    char temp[50];
    printf("Enter the words:");
    for(int i=0;i<n;i++){
        scanf("%s",words[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strlen(words[i])>strlen(words[j])){ //str1 comes after
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);

            }
            
        }
    }
    printf("Words sorted by length:\n");
    for(int i=0;i<n;i++){
        printf("%s ",words[i]);
    }
return 0;
}