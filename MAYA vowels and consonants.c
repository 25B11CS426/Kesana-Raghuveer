#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char ch;
    scanf(" %c", &ch); // Space before %c to consume any leading whitespace

    // Convert to lowercase for uniform comparison
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("VOWEL
");
    else
        printf("CONSONANT
");

    return 0;
}
