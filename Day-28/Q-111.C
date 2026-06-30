#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
};

int main()
{
    struct Ticket t[100];
    int n = 0;
    int choice;
    int i, ticketNo, found;

    while (1)
    {
        printf("\n=================================");
        printf("\n     TICKET BOOKING SYSTEM");
        printf("\n=================================");
        printf("\n1. Book Ticket");
        printf("\n2. Display All Bookings");
        printf("\n3. Search Booking");
        printf("\n4. Cancel Ticket");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Ticket Number: ");
            scanf("%d", &t[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf("%s", t[n].name);

            printf("Enter Destination: ");
            scanf("%s", t[n].destination);

            printf("Enter Number of Seats: ");
            scanf("%d", &t[n].seats);

            n++;

            printf("\nTicket Booked Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Booking Records Found!\n");
            }
            else
            {
                printf("\n----------- Booking Details -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nBooking %d\n", i + 1);
                    printf("Ticket No   : %d\n", t[i].ticketNo);
                    printf("Name        : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Ticket Number to Search: ");
            scanf("%d", &ticketNo);

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    printf("\nBooking Found\n");
                    printf("Ticket No   : %d\n", t[i].ticketNo);
                    printf("Name        : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nBooking Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Ticket Number to Cancel: ");
            scanf("%d", &ticketNo);

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    int j;

                    for (j = i; j < n - 1; j++)
                    {
                        t[j] = t[j + 1];
                    }

                    n--;

                    printf("\nTicket Cancelled Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nBooking Not Found!\n");
            }

            break;

        case 5:

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}