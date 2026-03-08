#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (non-alphabets will be stored): ");
    scanf("%[^A-Za-z]", str);

    printf("Stored non-alphabetic characters: %s\n", str);

    return 0;
}