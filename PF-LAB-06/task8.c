#include <stdio.h>

int main() {
    int guess;
    int correct = 7;

    printf("Guess the number: ");
    scanf("%d", &guess);

    while (guess != correct) {
        if (guess > correct)
            printf("Too High\n");
        else
            printf("Too Low\n");
        scanf("%d", &guess);
    }

    printf("Correct!\n");
    return 0;
}