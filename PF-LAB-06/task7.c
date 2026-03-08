#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n1. Addition\n2. Subtraction\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if (choice == 1)
                printf("Result: %d\n", a + b);
            else
                printf("Result: %d\n", a - b);
        }
    } while (choice != 3);

    printf("Calculator exited.\n");
    return 0;
}