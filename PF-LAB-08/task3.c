#include <stdio.h>

int main()
{
    int temperature[7][3];
    int i,j;
    int max;
    float avg,sum;

    for(i=0;i<7;i++)
    {
        printf("Enter temperatures for Day %d (Morning Afternoon Night): ",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&temperature[i][j]);
        }
    }

    max = temperature[0][0];

    for(i=0;i<7;i++)
    {
        for(j=0;j<3;j++)
        {
            if(temperature[i][j] > max)
            max = temperature[i][j];
        }
    }

    printf("Highest temperature in the week = %d\n",max);

    for(i=0;i<7;i++)
    {
        sum = 0;

        for(j=0;j<3;j++)
        {
            sum = sum + temperature[i][j];
        }

        avg = sum/3;
        printf("Average temperature of Day %d = %.2f\n",i+1,avg);
    }

    return 0;
}