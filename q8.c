#include <stdio.h>
#include<cs50.h>
int main(void)
{
int seat;
int booked=0;
int empty=0;

for (int i = 1; i <= 40; i++)
{seat=get_int("Enter seat (1=booked, 0=empty) ");
if (seat == 1)
 booked++;
else
 empty++;

if (booked == 40)
            break;}

printf("Total booked seats = %d\n", booked);
printf("Total empty seats = %d\n", empty);

return 0;
}
