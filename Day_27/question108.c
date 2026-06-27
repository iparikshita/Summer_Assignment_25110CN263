#include<stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    int m1,m2,m3,m4,m5;
    int total;
    float per;
    char grade;

};
void addStudent(struct Student s[],int *n){
    printf("Enter Roll number");
    scanf("%d",&s[*n].roll_no);//displays value at given address
    printf("Enter Student name: ");
    scanf("%s",s[*n].name);
    printf("Enter marks in 5 subjects out of 100: ");
    printf("Maths,Physics,Chemistry,Bio,PE");
    scanf("%d %d %d %d %d",&s[*n].m1,&s[*n].m2,&s[*n].m3,&s[*n].m4,&s[*n].m5);

    (*n)++;

}
void calculateResult(struct Student s[],int n){
    for(int i=0;i<n;i++){
        s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        s[i].per=(s[i].total/500.0)*100;
        if(s[i].per >= 90)
            s[i].grade = 'A';

        else if(s[i].per >= 80)
            s[i].grade = 'B';

        else if(s[i].per >= 70)
            s[i].grade = 'C';

        else if(s[i].per >= 60)
            s[i].grade = 'D';

        else
            s[i].grade = 'F';
    }
printf("Result calculated successfully\n");    
}
void displayMarksheet(struct Student s[],int n){
    if(n==0){
        printf("No record found\n");
    }
     printf("\n************MARKSHEET****************\n");
    for(int i=0;i<n;i++){
        printf("Student roll number %d\n",s[i].roll_no);
        printf("Student name %s\n",s[i].name);
        printf("Maths: %d\n",s[i].m1);
        printf("Physics: %d\n",s[i].m2);
        printf("Chemistry: %d\n",s[i].m3);
        printf("Biology: %d\n",s[i].m4);
        printf("PE: %d\n",s[i].m5);
        printf("Total marks %d\n",s[i].total);
        printf("Percentage: %.2f\n",s[i].per);
        printf("Grade %c\n",s[i].grade);
    }    
}
int main(){
    struct Student s[100];

    int n = 0;
    int choice;

    do
    {
        printf("\n******** MARKSHEET GENERATION SYSTEM ********\n");
        printf("1. Add Student\n");
        printf("2. Calculate Result\n");
        printf("3. Display Marksheet\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent(s, &n);
                break;

            case 2:
                calculateResult(s, n);
                break;

            case 3:
                displayMarksheet(s, n);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}