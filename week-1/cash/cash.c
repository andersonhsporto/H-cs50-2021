#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    //prompt start message using float
    int cents_owed;

    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);
    
    //init the int for Change
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    //calculates the number of each coin by increment
    while (cents_owed > 0)
    {
        //get numbers of change for each coin
        if (cents_owed >= 25)
        {
            cents_owed = cents_owed - 25;
            quarters++;
        }
        else if (cents_owed >= 10)
        {
            cents_owed = cents_owed - 10;
            dimes++;
        }
        else if (cents_owed >= 5)
        {
            cents_owed = cents_owed - 5;
            nickels++;
        }
        else
        {
            cents_owed = cents_owed - 1;
            pennies++;
        }
    }
    //return the total of coins
    printf("%d\n", quarters + dimes + nickels + pennies);
}
