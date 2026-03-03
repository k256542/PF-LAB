#include <stdio.h>

int main() {
    float price, total = 0;
    int more;

    do {
        printf("Enter product price: ");
        scanf("%f", &price);
        total += price;

        printf("Add another product? (1=Yes, 0=No): ");
        scanf("%d", &more);
    } while (more == 1);

    if (total > 5000)
        total *= 0.95;

    printf("Total payable amount: %.2f\n", total);
    return 0;
}