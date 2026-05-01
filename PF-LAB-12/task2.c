#include <stdio.h>
#include <stdlib.h>

int main() {
    int *contacts = (int *)malloc(3 * sizeof(int));

    if (contacts == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter contact ID %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    int *temp = (int *)realloc(contacts, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(contacts);
        return 1;
    }

    contacts = temp;

    for (int i = 3; i < 5; i++) {
        printf("Enter contact ID %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    printf("Updated Contact List:\n");

    for (int i = 0; i < 5; i++) {
        printf("Contact %d: %d\n", i + 1, contacts[i]);
    }

    free(contacts);
    contacts = NULL;

    return 0;
}
