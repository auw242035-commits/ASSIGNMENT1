#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int hours, total = 0, below = 0;

    for (int i = 1; i <= 7; i++)
    {
    hours=get_int ("Enter study hours for day %d ",i);
        total = total + hours;

        if (hours < 2)
        {below=below+1;}
    }

    float average = total / 7.0;

    printf("Total hours = %d\n", total);
    printf("Average hours = %.2f\n", average);
    printf("Days below 2 hours = %d\n", below);

    return 0;
}
