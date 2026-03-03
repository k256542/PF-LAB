#include <stdio.h>

int main() {
    int N, total = 0;
    printf("Enter number of boxes: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        total += i;
    }

    printf("Total decorative items required: %d\n", total);
    return 0;
}