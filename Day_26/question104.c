#include<stdio.h>
int main(){
    printf("***********WELCOME TO THE QUIZ!**************\n");
    printf("This quiz contains 3 questions each of one mark and all questions are compulsory\n");
    int score=0;
    int answer;
    printf("Q1: What is the capital of India?\n");
    printf("1= Jammu\n 2=Delhi\n 3=Uttar Pradesh\n 4=None\n");
    printf("Enter your answer");
    scanf("%d",&answer);
    if(answer==2){
        printf("Correct answer\n");
        score++;
    }
    else{
        printf("WRONG! correct answer is Delhi\n");
    }
    printf("Q2: What is 10+5?\n");
    printf("1= 5\n 2=20\n 3=15\n 4=None\n");
    printf("Enter your answer");
    scanf("%d",&answer);
    if(answer==3){
        printf("Correct answer\n");
        score++;
    }
    else{
        printf("WRONG! correct answer is 15\n");
    }
    printf("Q3:Which of these is not an AI tool?\n");
    printf("1=Chat GPT\n 2=Watermelon\n 3=Gemini\n 4=Claude\n");
    printf("Enter your answer");
    scanf("%d",&answer);
    if(answer==2){
        printf("Correct answer\n");
        score++;
    }
    else{
        printf("WRONG! correct answer is watermelon\n");
    }
    printf("***********************************\n");
    printf("Your Score = %d/3\n", score);

    if(score==3)
    {
        printf("Excellent!\n");
    }
    else if(score==2)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}