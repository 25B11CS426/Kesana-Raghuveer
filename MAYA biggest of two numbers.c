#include <stdio.h>

int main() {
    int x, y;

    // Input: read two integers
    scanf("%d", &x);
    scanf("%d", &y);

    // Output: print the bigger number
    if (x > y)
        printf("%d
", x);
    else
        printf("%d
", y);

    return 0;
}
