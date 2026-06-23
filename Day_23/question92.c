//maximum occuring character
#include<stdio.h>
int main(){
    char str[100],ch;
    int freq[256]={0};
    char max;
    int maxfreq=0;
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            max=i;
        }
    }
    printf("Maximum occuring character is %c and its frquency is %d",max,maxfreq);
return 0;    


    
}    
