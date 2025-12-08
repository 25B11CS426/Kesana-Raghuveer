#include <stdio.h>

int main() {
    float celsius = 20.5;
    float fahrenheit;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0/5.0) + 32;

    // Print Fahrenheit using a single printf
    printf("%f", fahrenheit);

    return 0;
}

