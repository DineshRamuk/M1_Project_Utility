#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void show1(int choice,char name[10],int id1,int price)
{
        int count = 0;
		system("cls");
		printf("\n\n");
        //printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t******************\n");
        printf("\t Booking ID : %d \t\t\tShow Name : KGF 2-7\n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 012-12-2022\n");
        
		person[count].id=id1;
        printf("\tThankYou For Booking a Ticket\n");
        return;
}
