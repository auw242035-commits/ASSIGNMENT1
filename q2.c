//Q2. Online Class Attendance Eligibility
#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int TC=get_int("Enter Total Class ");
    int AC=get_int("Enter Attended Class ");
float X=(AC/TC)*100;
printf("X=%f\n",X);
if(X>=75){printf("Allowed to sit in exam\n");}
else{printf("Not allowed\n");}
float Y=((75-X)/100)*TC;
if(X<75){printf("You need to attended %d more class ",Y);}
return 0;
}
