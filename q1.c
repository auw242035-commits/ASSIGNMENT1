//Q1. Smart Phone Charging Advisor
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int p=get_int("Enter battery percentage ");
int q=get_int("Enter 1 if the charger is connected else 0 ");
if(p<20 && q==0){printf("Connect charger immediately");}
else if (p>=20 && p<=80){printf("Battery level normal");}
else{printf("Unplug charger to save battery health");}



    return 0;
}
