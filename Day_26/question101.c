//number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("Guess a number between 1 to 100 ");
    srand(time(NULL));//new number everytime
    int secret=rand()%100+1;//between 1 to 100
    int guess;
    int attempts=0;
   do{
        printf("Enter your Guess: ");
        scanf("%d",&guess);

        attempts++;
        if(guess>secret){
            printf("Too high!!");
        }
        else if(guess<secret){
            printf("Too low!!");
        }
        
    }while(guess!=secret);
    printf("Congratulations! you guessed the number\n");
    printf("You took %d attempts",attempts);
    return 0;
}