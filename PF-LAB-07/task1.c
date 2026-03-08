#include <stdio.h>

int main() {
    int a[5], i, temp;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    temp = a[4];

    for(i = 4; i > 0; i--)
        a[i] = a[i-1];

    a[0] = temp;

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}