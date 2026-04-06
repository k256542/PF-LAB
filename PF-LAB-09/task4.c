#include <stdio.h>

int validatepin(int storedpin, int enteredpin);

int main() {
    int storedpin = 4729;
    int enteredpin;
    int i, result;

    for (i = 1; i <= 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &enteredpin);

        result = validatepin(storedpin, enteredpin);

        if (result == 1) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            if (i < 3) {
                printf("Wrong PIN. Attempts left: %d\n", 3 - i);
            } else {
                printf("Card blocked. Contact your bank.\n");
            }
        }
    }

    return 0;
}

int validatepin(int storedpin, int enteredpin) {
    if (storedpin == enteredpin) {
        return 1;
    } else {
        return 0;
    }
}