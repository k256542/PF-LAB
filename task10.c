#include <stdio.h>

int main() {
    int score, distinction = 0, pass = 0, fail = 0;

    printf("Enter student scores (-1 to stop): ");
    scanf("%d", &score);

    while (score != -1) {
        if (score >= 75)
            distinction++;
        else if (score >= 50)
            pass++;
        else
            fail++;
        scanf("%d", &score);
    }

    printf("Distinction: %d\nPass: %d\nFail: %d\n", distinction, pass, fail);
    return 0;
}