#include <stdio.h>
#include <cs50.h>
int main(void)
{
float price;
float total = 0;

while (1)
{
price=get_float("Enter price ");
    if (price == 0)
     break;
total = total + price;}

float discount;

if (total > 2000) discount = total * 0.15;

else discount = total * 0.05;

float finalBill = total - discount;

printf("Total = %.2f\n", total);
printf("Discount = %.2f\n", discount);
printf("Final Bill = %.2f\n", finalBill);

return 0;
}
