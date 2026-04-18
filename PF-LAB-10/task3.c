#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char copy[100];
    char display[150] = "Email: ";
    char *ptr;

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    int length = strlen(email);

    if (email[length - 1] == '\n')
    {
        email[length - 1] = '\0';
    }

    strcpy(copy, email);

    ptr = strchr(copy, '@');

    if (ptr == NULL)
    {
        printf("Invalid Email: '@' not found\n");
        return 0;
    }

    ptr++;

    if (strstr(ptr, ".") == NULL)
    {
        printf("Invalid Email: domain must contain '.'\n");
        return 0;
    }

    printf("Domain: %s\n", ptr);

    strcat(display, copy);

    printf("%s\n", display);

    return 0;
}