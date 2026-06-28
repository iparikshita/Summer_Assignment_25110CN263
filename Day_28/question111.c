#include<stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
};

void bookTicket(struct Ticket t[], int *n)
{
    printf("Enter Ticket Number: ");
    scanf("%d", &t[*n].ticketNo);
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t[*n].name);
    printf("Enter Destination: ");
    scanf(" %[^\n]", t[*n].destination);
    printf("Enter Number of Seats: ");
    scanf("%d", &t[*n].seats);

    (*n)++;
}

void displayTickets(struct Ticket t[], int n)
{
    if(n == 0)
    {
        printf("No Tickets Booked!\n");
        return;
    }

    printf("\n******** BOOKED TICKETS ********\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nTicket %d\n", i + 1);
        printf("Ticket Number : %d\n", t[i].ticketNo);
        printf("Passenger     : %s\n", t[i].name);
        printf("Destination   : %s\n", t[i].destination);
        printf("Seats         : %d\n", t[i].seats);
    }
}

void searchTicket(struct Ticket t[], int n)
{
    int ticketNo;
    int found = 0;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);

    for(int i = 0; i < n; i++)
    {
        if(t[i].ticketNo == ticketNo)
        {
            found = 1;

            printf("\nTicket Found\n");
            printf("Passenger   : %s\n", t[i].name);
            printf("Destination : %s\n", t[i].destination);
            printf("Seats       : %d\n", t[i].seats);

            break;
        }
    }

    if(found == 0)
    {
        printf("Ticket Not Found\n");
    }
}

void cancelTicket(struct Ticket t[], int *n)
{
    int ticketNo;
    int found = 0;

    printf("Enter Ticket Number to Cancel: ");
    scanf("%d", &ticketNo);

    for(int i=0; i < *n; i++)
    {
        if(t[i].ticketNo == ticketNo)
        {
            found = 1;
            for(int j=i; j< *n - 1; j++)
            {
                t[j] = t[j + 1];//shift
            }

            (*n)--;

            printf("Ticket Cancelled Successfully!\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Ticket Not Found\n");
    }
}

int main(){
    struct Ticket t[100];
    int n = 0;
    int choice;

    do{
        printf("\n******** TICKET BOOKING SYSTEM ********\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket(t, &n);
                break;

            case 2:
                displayTickets(t, n);
                break;

            case 3:
                searchTicket(t, n);
                break;

            case 4:
                cancelTicket(t, &n);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice != 5);

    return 0;
}