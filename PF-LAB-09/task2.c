#include <stdio.h>

float applydiscount(float price, int tier);
void printinvoice(float original, float discounted);

int main() {
    float price, finalprice;
    int tier;

    printf("Enter original price: ");
    scanf("%f", &price);

    printf("Enter membership tier (1-4): ");
    scanf("%d", &tier);

    finalprice = applydiscount(price, tier);

    printinvoice(price, finalprice);

    return 0;
}

float applydiscount(float price, int tier) {
    float newprice;

    if (tier == 1) {
        newprice = price - (price * 0.05);
    } else if (tier == 2) {
        newprice = price - (price * 0.10);
    } else if (tier == 3) {
        newprice = price - (price * 0.20);
    } else if (tier == 4) {
        newprice = price - (price * 0.30);
    } else {
        newprice = price;
    }

    return newprice;
}

void printinvoice(float original, float discounted) {
    float discountamount, delivery, total;

    discountamount = original - discounted;

    if (discounted < 2000) {
        delivery = 150;
    } else {
        delivery = 0;
    }

    total = discounted + delivery;

    printf("\n----- Invoice -----\n");
    printf("Original Price: %.2f\n", original);
    printf("Discount: %.2f\n", discountamount);
    printf("Delivery Charge: %.2f\n", delivery);
    printf("Final Total: %.2f\n", total);
}