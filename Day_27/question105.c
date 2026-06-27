#include<stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    int marks;

};
void addStudent(struct Student s[],int *n){
    printf("Enter Roll number");
    scanf("%d",&s[*n].roll_no);//displays value at given address
    printf("Enter Student name: ");
    scanf("%s",s[*n].name);
    printf("Enter marks out of 500: ");
    scanf("%d",&s[*n].marks);

    (*n)++;

}
void displayStudent(struct Student s[],int n){
    if(n==0){
        printf("No records found\n");
    }
    printf("\n************STUDENT RECORDS****************\n");
    for(int i=0;i<n;i++){
        printf("Student roll number %d\n",s[i].roll_no);
        printf("Student name %s",s[i].name);
        printf("Student marks %d",s[i].marks);
    }
}
void SearchStudent(struct Student s[],int n){
    int Roll;
    int found=0;

    printf("\n Enter Student roll number: ");
    scanf("%d",&Roll);
    for(int i=0;i<n;i++){
        if(s[i].roll_no==Roll){
            printf("Student found\n");
            printf("Student %d\n",i+1);
            printf("Student Roll number %d\n",s[i].roll_no);
            printf("Student name %s\n",s[i].name);
            printf("Student marks %d\n",s[i].marks);
            found=1;
            break;

        }
    }
    if(found==0){
        printf("Student not found\n");
    }

}
void UpdateStudent(struct Student s[],int n){
    int Roll;
    int found=0;

    printf("\n Enter Student roll number: ");
    scanf("%d",&Roll);
    for(int i=0;i<n;i++){
        if(s[i].roll_no==Roll){
            printf("Enter new marks\n");
            scanf("%d",&s[i].marks);

            printf("Marks Updated Successfully\n");
            found=1;
            break;

        }
    }
    if(found==0){
        printf("Student not found\n");
    }


}

int main(){
    
    struct Student s[100];
    int n=0;
    int choice;
do
{    
    printf("\n1-Add Student\n");
    printf("\n2-Display Students\n");
    printf("\n3-Search Student\n");
    printf("\n4-Update narks of student\n");
    printf("\n5-Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
           addStudent(s,&n);//sends address
           break;
        case 2:
           displayStudent(s,n);
           break;
        case 3:
           SearchStudent(s,n);
           break;
        case 4:
            UpdateStudent(s,n);
            break;
        case 5:
            printf("Thank you for using Student Mangement System");
            break;
        default:
            printf("Invalid choice"); 
    }                     
}while (choice!=5);
return 0;    
}   

