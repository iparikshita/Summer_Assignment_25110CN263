#include<stdio.h>
#include<string.h>
struct Contact{
    char name[50];
    char phone[15];
    char email[50];
};

void addContact(struct Contact c[], int *n)
{
    printf("Enter Name: ");
    scanf(" %[^\n]", c[*n].name);
    printf("Enter Phone Number: ");
    scanf("%s", c[*n].phone);
    printf("Enter Email: ");
    scanf("%s", c[*n].email);

    (*n)++;
}

void displayContacts(struct Contact c[], int n){
    if(n == 0)
    {
        printf("No Contacts Found!\n");
        return;
    }

    printf("\n******** CONTACT LIST ********\n");

    for(int i = 0; i < n; i++)
    {
        printf("Contact %d\n", i + 1);
        printf("Name  : %s\n", c[i].name);
        printf("Phone : %s\n", c[i].phone);
        printf("Email : %s\n", c[i].email);
    }
}

void searchContact(struct Contact c[], int n){
    char name[50];
    int found = 0;

    printf("Enter Name to Search: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)//contacts matched
        {
            found = 1;

            printf("\nContact Found!\n");
            printf("Name  : %s\n", c[i].name);
            printf("Phone : %s\n", c[i].phone);
            printf("Email : %s\n", c[i].email);

            break;
        }
    }

    if(found == 0)
    {
        printf("Contact Not Found!\n");
    }
}

void updateContact(struct Contact c[], int n)
{
    char name[50];
    int found = 0;

    printf("Enter Name to Update: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            found = 1;
            printf("Enter New Phone Number: ");
            scanf("%s", c[i].phone);

            printf("Enter New Email: ");
            scanf("%s", c[i].email);

            printf("Contact Updated Successfully!\n");

            break;
        }
    }

    if(found == 0)
    {
        printf("Contact Not Found!\n");
    }
}

int main(){
    struct Contact c[100];

    int n = 0;
    int choice;

    do
    {
        printf("\n******** CONTACT MANAGEMENT SYSTEM ********\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact(c, &n);
                break;

            case 2:
                displayContacts(c, n);
                break;

            case 3:
                searchContact(c, n);
                break;

            case 4:
                updateContact(c, n);
                break;

            case 5:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice != 5);

    return 0;
}