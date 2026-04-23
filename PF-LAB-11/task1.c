#include <stdio.h>

int totalPower(int floors)
{
    if (floors == 1)
        return 100;
    else
        return 2 * totalPower(floors - 1) + 100;
}

int main()
{
    int floors;

    printf("Enter number of floors: ");
    scanf("%d", &floors);

    printf("Total Power Consumption: %d kWh\n", totalPower(floors));

    return 0;
}