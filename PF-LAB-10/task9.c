#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL)
    {
        printf("File not found. Creating default config file...\n");

        fptr = fopen("config.txt", "w");

        if (fptr == NULL)
        {
            printf("Error creating file\n");
            return 0;
        }

        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "mode=default\n");

        fclose(fptr);

        printf("Default config file created\n");
    }
    else
    {
        printf("Config file found\n");
        fclose(fptr);
    }

    return 0;
}