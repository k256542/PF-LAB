#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[50];
    int s1, s2, s3;
    float avg;

    fptr = fopen("report.txt", "w+");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter 3 subject scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Subject1: %d\n", s1);
    fprintf(fptr, "Subject2: %d\n", s2);
    fprintf(fptr, "Subject3: %d\n", s3);
    fprintf(fptr, "Average: %.2f\n", avg);

    if (avg >= 50)
        fprintf(fptr, "Status: Pass\n");
    else
        fprintf(fptr, "Status: Fail\n");

    rewind(fptr);

    printf("\nReport Card:\n");

    char line[100];

    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}