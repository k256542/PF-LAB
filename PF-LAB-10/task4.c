#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][30];
    char search[30];
    int found = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], 30, stdin);

        int len = strlen(names[i]);
        if (names[i][len - 1] == '\n')
        {
            names[i][len - 1] = '\0';
        }
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i, names[i]);
    }

    printf("\nEnter name to search: ");
    fgets(search, 30, stdin);

    int len2 = strlen(search);
    if (search[len2 - 1] == '\n')
    {
        search[len2 - 1] = '\0';
    }

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], search) == 0)
        {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student not found\n");
    }

    return 0;
}