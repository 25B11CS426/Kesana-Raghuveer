#include <stdio.h>

int main() {
    float fahrenheit = 98.3;
    float celsius;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0/9.0;

    // Print Celsius using a single printf
    printf("%f", celsius);

    return 0;
}

