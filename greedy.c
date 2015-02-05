#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change = 0;
    int coins = 0;
    
    // get amount of change owed
    do
    {
        printf("How much are you owed?");
        change = GetFloat();
    }
    while (change < 0);
    
    // convert dollars to pennies
    int pennies = floorf(change * 100 + 0.5);
    
    // calculate number of coins
    if (pennies / 25 >= 1)
    {
        coins = coins + pennies / 25;
        pennies = pennies % 25;
    }        
    if (pennies / 10 >= 1)
    {
        coins = coins + pennies / 10;
        pennies = pennies % 10;
    }
    if (pennies / 5 >= 1)
    {
        coins = coins + pennies / 5;
        pennies = pennies % 5;
    }
    if (pennies / 1 >= 1)
    {
        coins = coins + pennies / 1;
        pennies = pennies % 5;
    }
    
    // print coins
    printf("%d\n", coins);  
}
