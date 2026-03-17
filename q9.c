#include <stdio.h>
#include <cs50.h>
int main(void)
{
int num;
int digit;
int sum = 0;
int oddCount = 0;

num=get_int("Enter a number ");

 while (num > 0)
    {
        digit = num % 10;
        sum = sum+digit;

 if (digit % 2 != 0)
            oddCount++;
        num = num / 10;}

printf("Sum of digits = %d\n", sum);
printf("Odd digits count = %d\n", oddCount);

return 0;
}
