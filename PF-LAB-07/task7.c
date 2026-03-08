#include <stdio.h>

int main() {
    int a[10], i, j;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(a[i] == a[j])
                a[j] = -1;
        }
    }

    printf("Updated array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}