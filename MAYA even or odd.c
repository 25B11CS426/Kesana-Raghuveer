#include <stdio.h>

int main() {
    int num;

    // Input: read one integer
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0)
        printf("Even
");
    else
        printf("Odd
");

    return 0;
}
