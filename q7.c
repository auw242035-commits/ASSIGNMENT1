#include <stdio.h>
#include <cs50.h>
int main(void)
{
int pin;
int attempts = 0;

    while (attempts < 3)
{ pin=get_int("Enter pin ");

    if (pin == 5555)  {printf("Access Granted\n");
            return 0;
        }
attempts=attempts+1;}

printf("Account Locked\n");
return 0;
}
