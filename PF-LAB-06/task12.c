#include <stdio.h>

int main() {
    int seats = 40, book;

    while (seats > 0) {
        printf("Book a seat? (1=Yes, 0=Stop): ");
        scanf("%d", &book);

        if (book == 0)
            break;

        seats--;
        printf("Remaining seats: %d\n", seats);
    }

    printf("Reservation process ended.\n");
    return 0;
}