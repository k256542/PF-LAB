#include <stdio.h>
#include <string.h>

int myisdigit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}

int main()
{
    char name[100];
    int length;
    int valid = 1;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    length = strlen(name);

    if (name[length - 1] == '\n')
    {
        name[length - 1] = '\0';
        length--;
    }

    if (length < 3 || length > 20)
    {
        valid = 0;
    }

    if (name[0] == ' ' || name[length - 1] == ' ')
    {
        valid = 0;
    }

    for (int i = 0; i < length; i++)
    {
        if (myisdigit(name[i]) == 1)
        {
            valid = 0;
        }
    }

    if (valid == 1)
        printf("Valid Name\n");
    else
        printf("Invalid Name\n");

    printf("Length: %d\n", length);

    return 0;
}