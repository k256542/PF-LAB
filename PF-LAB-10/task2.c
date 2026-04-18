#include <stdio.h>
#include <string.h>

int main()
{
    char stored[50] = "secure123";
    char input[50];
    int attempts = 0;
    int result;

    while (attempts < 3)
    {
        printf("Enter password: ");
        fgets(input, sizeof(input), stdin);

        int length = strlen(input);

        if (input[length - 1] == '\n')
        {
            input[length - 1] = '\0';
            length--;
        }

        if (strlen(input) == 0)
        {
            printf("Empty password not allowed\n");
            continue;
        }

        result = strcmp(input, stored);

        if (result == 0)
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            attempts++;

            if (result < 0)
                printf("Input password is alphabetically before stored password\n");
            else
                printf("Input password is alphabetically after stored password\n");

            if (attempts == 2)
            {
                if (strncmp(input, stored, 3) == 0)
                    printf("Hint: First 3 characters match\n");
                else
                    printf("Hint: First 3 characters do not match\n");
            }
        }
    }

    printf("Account Locked after 3 failed attempts\n");

    return 0;
}