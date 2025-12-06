#include <stdio.h>

int main() {
    int eng, math, phy, chem, cs;

    // Input: read five space-separated integers
    scanf("%d %d %d %d %d", &eng, &math, &phy, &chem, &cs);

    // Check if all marks are greater than 34
    if (eng > 34 && math > 34 && phy > 34 && chem > 34 && cs > 34)
        printf("PASSED
");
    else
        printf("FAILED
");

    return 0;
}
