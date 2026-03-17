//Q11. Pattern – Creative
#include <stdio.h>
#include <cs50.h>
int main(void)

{
for (int i = 1; i <= 4; i++)
    {
for (char ch = 'A'; ch <'A' + i; ch++)
{printf("%c", ch);}
printf("\n");
    }

return 0;
}
