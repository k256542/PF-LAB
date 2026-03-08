#include <stdio.h>

int main() {
    int password;
    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Password correct!\n");
    return 0;
}