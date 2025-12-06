#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input: read three integers
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest
    int largest = num1;

    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    // Output the largest number
    printf("%d
", largest);

    return 0;
}
