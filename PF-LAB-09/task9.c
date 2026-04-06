#include <stdio.h>

int main() {
    int attendance[4][5] = {
        {1, 0, 1, 1, 0},
        {1, 1, 1, 0, 0},
        {0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1}
    };

    int (*p)[5] = attendance;
    int i, j, sum;

    for (i = 0; i < 4; i++) {
        sum = 0;

        printf("Student %d: ", i + 1);

        for (j = 0; j < 5; j++) {
            printf("%d ", (*(p + i))[j]);
            sum = sum + (*(p + i))[j];
        }

        printf(" | Total: %d", sum);

        if (sum < 3) {
            printf(" | At risk");
        }

        printf("\n");
    }

    return 0;
}