#include <stdio.h>

int countAll(char *str, int *digits)
{
    if (str[0] == '\0')
        return 0;

    int upper = 0;

    if (str[0] >= 'A' && str[0] <= 'Z')
        upper = 1;

    if (str[0] >= '0' && str[0] <= '9')
        (*digits)++;

    return upper + countAll(str + 1, digits);
}

int main()
{
    char password[100];
    int digits = 0;
    int upperCount;

    printf("Enter password: ");
    scanf("%s", password);

    upperCount = countAll(password, &digits);

    printf("Uppercase letters: %d\n", upperCount);
    printf("Digits: %d\n", digits);

    return 0;
}