#include <stdio.h>
#include <string.h>

#define MAX 50
struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n**********Student Record Management System **********\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Add Student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
}

// Display Students
void displayStudents() {
    int i;

    if(count == 0) {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");
    for(i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

// Search Student
void searchStudent() {
    int roll, i;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(s[i].roll == roll) {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found!\n");
}

// Update Student
void updateStudent() {
    int roll, i;

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(s[i].roll == roll) {

            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Record Updated Successfully!\n");
            return;
        }
    }

    printf("Student Not Found!\n");
}

// Delete Student
void deleteStudent() {
    int roll, i, j;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(s[i].roll == roll) {

            for(j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }

            count--;
            printf("Record Deleted Successfully!\n");
            return;
        }
    }

    printf("Student Not Found!\n");
}