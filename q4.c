#include <stdio.h>
#include <cs50.h>
int main(void)

{int units= get_int("Enter units ");
float bill = 0;

if (units <= 100)
    { bill = units * 5;}
else if (units <= 200)
    {bill = (100 * 5) + ((units - 100) * 6);}
else
    {bill = (100 * 5) + (100 * 6) + ((units - 200) * 8);}

if (bill > 1000)
    {bill = bill + (bill * 0.10);}
 printf("Total bill = %.2f taka\n", bill);

return 0;
}
