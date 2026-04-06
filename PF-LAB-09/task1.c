#include <stdio.h>

float triagescore(int severity, int age, int vitals);

int main() {
    int severity, age, vitals;
    float score;

    printf("Enter severity score: ");
    scanf("%d", &severity);

    printf("Enter age risk score: ");
    scanf("%d", &age);

    printf("Enter vitals stability score: ");
    scanf("%d", &vitals);

    score = triagescore(severity, age, vitals);

    if (score > 7.0) {
        printf("Immediate attention required\n");
    } else if (score >= 4.0 && score <= 7.0) {
        printf("Moderate priority\n");
    } else {
        printf("Can wait\n");
    }

    return 0;
}

float triagescore(int severity, int age, int vitals) {
    float result;
    result = (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
    return result;
}