#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int cents_owed;
    // 0.57
    // 0.53
    // 1267.8211321 = 1267
    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    int quarters = cents_owed / 25;
    int dimes = (cents_owed - quarters* 25)/ 10;
    int nickels = (cents_owed - quarters*25 - dimes*10)/5;
    int number = (cents_owed - quarters*25 - dimes*10 - nickels*5)/1;
    printf("%d", quarters + dimes + nickels + number);

}
// 235