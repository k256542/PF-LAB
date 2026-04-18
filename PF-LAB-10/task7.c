#include <stdio.h>

int main()
{
    FILE *fptr;
    char product[50];
    int quantity;

    fptr = fopen("inventory.txt", "a");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    printf("Enter product and quantity: ");
    scanf("%s %d", product, &quantity);

    fprintf(fptr, "%s %d\n", product, quantity);

    fclose(fptr);

    fptr = fopen("inventory.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    printf("\nInventory Data:\n");

    while (fscanf(fptr, "%s %d", product, &quantity) != EOF)
    {
        printf("%s %d\n", product, quantity);
    }

    fclose(fptr);

    return 0;
}