#include <stdio.h>

int totalruns(int arr[], int n);
int highestscore(int arr[], int n);
int aboveaverage(int arr[], int n, float avg);

int main() {
    int scores[10];
    int i, total, high, count;
    float avg;

    for (i = 0; i < 10; i++) {
        printf("Enter score for match %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    total = totalruns(scores, 10);
    avg = (float)total / 10;
    high = highestscore(scores, 10);
    count = aboveaverage(scores, 10, avg);

    printf("\n----- Performance Report -----\n");
    printf("Total Runs: %d\n", total);
    printf("Average Runs: %.2f\n", avg);
    printf("Highest Score: %d\n", high);
    printf("Matches above average: %d\n", count);

    return 0;
}

int totalruns(int arr[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int highestscore(int arr[], int n) {
    int i, max;

    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int aboveaverage(int arr[], int n, float avg) {
    int i, count = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count = count + 1;
        }
    }

    return count;
}