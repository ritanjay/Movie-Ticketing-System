#include<stdio.h>
#include<conio.h>
#include<string.h>
struct customerinfo
{
	int seat;
	char id[20];
	char day[10],name[20],time[5],gen;
	
}c1;
int otp,pin,num[10];
char payment;
char cname[20];
char cid[20];
int payment_gateway();
int cancelation();
int main()
{
	int p,x,q,i,bill,cnfrm;
	char a,b,c,y,A,B,C,M,F;
	printf("\t\t\t\t\tWelcome To My Mini Project\n");
	printf("Press 1 to book a movie ticket     ");
scanf("%d",&p);
if (p==1)
{
	printf("\n\n                                    ######## Welcome to Movie Ticketing System #######\n");


printf("\n\n================================\n");
printf("              MENU \n");
printf("\n\n");
printf("Each seat costs 200\n\n");
printf("Select Movies\n");
printf("\n");
     printf("              ..............................................................\n");
     printf("              ..                EACH SEAT COSTS 200Rs                     ..\n");
     printf("              ..............................................................\n\n");
printf("                                   \\Choose the movie/\n\n");
printf("                   1.Justice League     2.Tiger Zinda Hai    3.Thor     \n                   = ");
scanf("%d",&x);
printf("\n");

if (x==1)
{
printf("\t\t\tJustice League\n   \tMonday\t\t\t9am\t\t3pm\n       Tuesday\t\t\t10am\t\t1pm\n       Wednesday\t\t11am\t\t2pm\n       Thursday\t\t\t12pm\t\t4pm\n       Friday\t\t\t2pm\t\t8pm\n   All the shows are booked on Saturday and Sunday.\n");
}
else
if(x==2)
{
	printf("\t\t\tTiger Zinda Hai\n   Friday\t\t\t11am\t\t8pm\n   Saturday\t\t\t12pm\t\t9pm\n   Sunday\t\t\t10am\t\t5pm\n   All the shows are booked on Monday, Tuesday and wednesday\n");
}
else
{
	printf("\t\t\tThor\n\t   Only Fews days are left\n   Monday\t\t\t10am\t\t7pm\n   Tuesday\t\t\t12pm\t\t9pm\n   Wednesday\t\t\t10am\t\t5pm\n");
}
printf("\n\nFill Up The Required Information");
printf("   -------------------------------------");
printf("\n   Enter Gender(M or F):       ");
fflush(stdin);
scanf("%c",&c1.gen);
printf("   Enter the Customer's Name:  ");
fflush(stdin);
scanf("%s",&c1.name);
printf("   Enter the day:              ");
fflush(stdin);
scanf("%s",&c1.day);

printf("   Enter the time:             ");
scanf("%s",&c1.time);

printf("   Enter the number of seats:  ");
scanf("%d",&c1.seat);
*c1.id=0;
strcat(c1.id,c1.name);
strcat(c1.id,"@1011id");
printf("\n   Your Booking Id is :        %s",c1.id);
         
printf("\n------------------------------------------------------------------------");
printf("\n\n");
payment_gateway();

printf("\n\n");
printf("Press 8 to confirm the ticket\nPress anything except 8 to Cancel the ticket   ");
scanf("%d",&cnfrm);
if (cnfrm==8)
{
bill=(200*c1.seat);

printf("\n\n++++++++++++++++++++++++++++++++++++++++++\n");
printf("                   BILL                  \n ");
printf("++++++++++++++++++++++++++++++++++++++++++\n");
if (c1.gen=='M')
{
printf("               Customer's Name    :Mr.%s\n",c1.name);
}
else if (c1.gen=='F')
{
printf("               Customer's Name    :Ms.%s\n",c1.name);
}
if (payment=='B')
printf("               Customer's Number  :%s\n",num);
else
printf("               The day is         :%s\n",c1.day);
printf("               The time is        :%s\n",c1.time);
printf("               Number of seats are:%d\n",c1.seat);
printf("               The bill is        :%dRs\n",bill);
}
else
cancelation();

}
else
printf("You have not pressed 1...You cannot buy tickets.\n\n          Thank You");

return 0;
}


int payment_gateway()
{
	printf("Payment mode\nA.Cash\nB.Paytm\nC.Card\n");
printf("Choose The Payment Mode:   ");
fflush(stdin);
scanf("%c",&payment);


if (payment=='A')
printf("You are paying through Cash");
else if (payment=='B')
{
printf("You are paying through Paytm\n");
printf("Enter the Phone Number:");
fflush(stdin);
scanf("%s",&num);
printf("Enter The OTP code :");
scanf("%d",&otp);
printf("OTP confirmed");
}
else if (payment=='C')
{
printf("You are paying through Card\n");
printf("Enter the pin:");
scanf("%d",&pin);
printf("pin confirmed\n");
printf("thanks for ur response");
}}

int cancelation()
{
	printf("\n\n\t\tCancellation Process");
printf("\n\nEnter The Booking Id:");
fflush(stdin);
scanf("%s",cid);
if (strcmp(cid,c1.id)==0)
{
printf("\n\n      Your Ticket has been canceled and the Amount Is Refunded.\n\n");
printf("                                   Thank You For Joining us\n");
}
else
printf("Wrong Id Entered....Your Ticket Will Not Cancel.");
}









