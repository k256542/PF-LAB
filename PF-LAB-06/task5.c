#include <stdio.h>

int main() {
    int temp, count = 0;
    float sum = 0;

    printf("Enter temperatures (-999 to stop): ");
    scanf("%d", &temp);

    while (temp != -999) {
        sum += temp;
        count++;
        scanf("%d", &temp);
    }

    if (count > 0)
        printf("Average temperature: %.2f\n", sum / count);
    else
        printf("No valid temperatures entered.\n");

    return 0;
}