#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // Calculate total cost for 4 tickets
    int total = 4 * X;

    // Check if total cost is within the budget
    if (total <= 1000) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}
