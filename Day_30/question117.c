#include<stdio.h>
int main(){
    int rollno[100],marks[100];
    char name[100][50];//100 max 50 length
    int n,choice,searchroll,found;
    printf("Enter the number of students");
    scanf("%d",&n);

do{
    printf("\n*************STUDENT RECORD SYSTEM**************\n");
    printf("1- Add student\n");
    printf("2- Display students\n");
    printf("3- Search student\n");
    printf("4- Update marks\n");
    printf("5-Exit\n");
    
    printf("Enter a choice: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            for(int i=0;i<n;i++){
            printf("Student %d\n",i+1);
            printf("Enter student's roll number : \n");
            scanf("%d",&rollno[i]);
            printf("Enter student's name: \n");
            scanf(" %[^\n]", name[i]);
            printf("Enter marks out of 500: \n");
            scanf("%d",&marks[i]);

           }
           break;
        case 2:
            for(int i=0;i<n;i++){
                printf("Student roll number: %d\n",rollno[i]);
                printf("Student name: %s\n", name[i]);
                printf("Marks out of 500: %d\n",marks[i]);
            }
            break;
        case 3:
            printf("Enter the rollno of student you want to search: ");
            scanf("%d",&searchroll);
            found=0;
            for(int i=0;i<n;i++){
                if(rollno[i]==searchroll){
                    printf("Student found\n");
                    printf("Student roll number: %d\n",rollno[i]);
                    printf("Student name: %s\n", name[i]);
                    printf("Marks out of 500: %d\n",marks[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Student not found\n");
            }
            break;
        case 4:
            printf("Enter the rollno of student: ");
            scanf("%d",&searchroll);
            found=0;
            for(int i=0;i<n;i++){
                if(rollno[i]==searchroll){
                    printf("Enter new marks: ");
                    scanf("%d",&marks[i]);

                    printf("Marks updated successfully!!");
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Student not found\n");
            }    
            break; 
        case 5:
            printf("Thank you\n");
            break;
        default:
            printf("Invalid choice\n");           

    }


}while(choice!=5);
return 0;   


}