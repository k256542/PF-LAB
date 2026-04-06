#include <stdio.h>

int main() {
    int arr[6];
    int *p = arr;
    int i;
    int highest;
    int temp;

    for (i = 0; i < 6; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", (p + i));
    }

    printf("\nOriginal Marks:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    highest = *(p + 0);

    for (i = 1; i < 6; i++) {
        temp = *(p + i);
        if (temp > highest) {
            highest = temp;
        }
    }

    for (i = 0; i < 6; i++) {
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    printf("\n\nScaled Marks:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}