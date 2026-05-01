#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    float *grades = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printf("Student Grades:\n");

    for (int i = 0; i < n; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
    }

    free(grades);
    return 0;
}
