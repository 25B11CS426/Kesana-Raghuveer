#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Swapping:
    // Step 1: Store a in temp
    int temp = a;
    // Step 2: Assign b to a
    a = b;
    // Step 3: Assign temp (original a) to b
    b = temp;

    // Printing swapped values using a single printf
    printf("%d %d", a, b);

    return 0;
}

