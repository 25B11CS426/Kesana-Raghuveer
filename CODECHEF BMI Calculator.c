#include <stdio.h>

int main() {
    float height = 1.82;   // in meters
    float weight = 72;     // in kg
    float bmi;

    // BMI formula: weight / (height * height)
    bmi = weight / (height * height);

    // Print BMI using a single printf
    printf("%f", bmi);

    return 0;
}

