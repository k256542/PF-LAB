#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of sensors: ");
    scanf("%d", &n);

    float *buffer = (float *)calloc(n, sizeof(float));

    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initial values in buffer:\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i + 1, buffer[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter temperature for sensor %d: ", i + 1);
        scanf("%f", &buffer[i]);
    }

    printf("Updated sensor readings:\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i + 1, buffer[i]);
    }

    free(buffer);
    buffer = NULL;

    return 0;
}
