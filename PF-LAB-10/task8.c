#include <stdio.h>

int main()
{
    FILE *fptr;
    int score;
    int sum = 0;
    int val;
    float avg;

    fptr = fopen("survey.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    while (fscanf(fptr, "%d", &val) != EOF)
    {
        sum = sum + val;
    }

    fclose(fptr);

    avg = sum / 5.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}