#include <stdio.h>

float totalrevenue(float bills[], int n);
int besttable(float bills[], int n);
int isprofitable(float total);

int main() {
    float bills[5];
    float total;
    int i, best, profit;

    for (i = 0; i < 5; i++) {
        printf("Enter bill for table %d: ", i + 1);
        scanf("%f", &bills[i]);
    }

    total = totalrevenue(bills, 5);
    best = besttable(bills, 5);
    profit = isprofitable(total);

    printf("\n----- Closing Summary -----\n");
    printf("Total Revenue: %.2f\n", total);
    printf("Best Table: Table %d\n", best + 1);

    if (profit == 1) {
        printf("Status: Profitable night\n");
    } else {
        printf("Status: Not profitable\n");
    }

    return 0;
}

float totalrevenue(float bills[], int n) {
    int i;
    float sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + bills[i];
    }

    return sum;
}

int besttable(float bills[], int n) {
    int i;
    int maxidx = 0;

    for (i = 1; i < n; i++) {
        if (bills[i] > bills[maxidx]) {
            maxidx = i;
        }
    }

    return maxidx;
}

int isprofitable(float total) {
    if (total > 10000) {
        return 1;
    } else {
        return 0;
    }
}