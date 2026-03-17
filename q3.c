//Q3. Movie Ticket Counter
#include <stdio.h>
#include <cs50.h>
int main()
{
int age, day;
int ticket;

age=get_int("Enter age ");
day=get_int("Enter day ");

if (age < 10)  {ticket = 60;}
else
    {
if (age <= 25)
{
 if (day == 0)  {ticket = 100;}
else
{ ticket = 120;}
 }
else
{ if (day == 0)  {ticket = 140;}
else  {ticket = 160;}}
}

printf("Ticket price = %d \n", ticket);
return 0;
}
