#include <stdio.h>

int main()
{
    int seats[5][6] = {
        {1,0,0,1,0,1},
        {0,0,1,0,0,0},
        {1,1,0,1,0,0},
        {0,0,0,0,1,0},
        {1,0,1,0,0,1}
    };

    int i, j;
    int available = 0;
    int count, max = 0, row = 0;

    for(i = 0; i < 5; i++)
    {
        count = 0;

        for(j = 0; j < 6; j++)
        {
            if(seats[i][j] == 0)
                available++;

            if(seats[i][j] == 1)
                count++;
        }

        if(count > max)
        {
            max = count;
            row = i + 1;
        }
    }

    printf("Available seats = %d\n", available);
    printf("Row with maximum booked seats = %d\n", row);

    return 0;
}