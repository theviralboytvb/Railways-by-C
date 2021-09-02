#include <stdio.h>
#include "conio2.h"
#include "rlyres.h"
int enterchoice()
{
    int choice,i;
    textcolor(RED);
    gotoxy(28,1);
    printf("TvB RAILWAY RESERVATION SYSTEM\n");
    for(i=1;i<80;i++)
        printf("~");

    printf("\nSelect an Option\n");
    printf("\n1-View Trains");
    printf("\n2-Book Ticket");
    printf("\n3-View Ticket");
    printf("\n4-Search Ticket No");
    printf("\n5-View All Bookings");
    printf("\n6-View Train Bookings");
    printf("\n7-Cancel Ticket");
    printf("\n8-Cancel Train");
    printf("\n9-Quit");
    printf ("\n\nEnter Choice:");
    scanf("%d",&choice);
    return choice;
}

