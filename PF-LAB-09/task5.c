#include <stdio.h>

float tomegajoules(float kwh);
float tobtu(float kwh);
float tocalories(float kwh);

int main() {
    float kwh, mj, btu, cal;

    printf("Enter energy in kWh: ");
    scanf("%f", &kwh);

    mj = tomegajoules(kwh);
    btu = tobtu(kwh);
    cal = tocalories(kwh);

    printf("\n----- Conversion Report -----\n");
    printf("kWh: %.2f\n", kwh);
    printf("Megajoules: %.2f\n", mj);
    printf("BTU: %.2f\n", btu);
    printf("Calories: %.2f\n", cal);

    printf("\nDirect call example:\n");
    printf("MJ (direct): %.2f\n", tomegajoules(kwh));

    return 0;
}

float tomegajoules(float kwh) {
    float val;
    val = kwh * 3.6;
    return val;
}

float tobtu(float kwh) {
    float val;
    val = kwh * 3412.14;
    return val;
}

float tocalories(float kwh) {
    float val;
    val = kwh * 859845;
    return val;
}