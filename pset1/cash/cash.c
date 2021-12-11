#include <stdio.h>
#include <cs50.h>
#include <math.h>

float change; // change can be float

int amount;

int coins = 0;

int main(void)
{

    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    amount = round(change * 100);

    while (amount >= 25)
    {
        amount -= 25;//This is the end of loop substract until it reaches to the
        //25 or less
        coins ++;// this is the count of coins that how many owned coins will
        //become big bite
    }

    while (amount >= 10)
    {
        amount -= 10;
        coins ++;
    }

    while (amount >= 5)
    {
        amount -= 5;
        coins++;
    }
    while (amount >= 1)
    {
        amount -= 1;
        coins++;
    }

    printf("The minimum number of coins that is to be used is: %i", coins); //the minimum number of coins
    printf(" coins.");
    printf("\n");

}
