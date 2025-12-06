#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

    // Read character
    scanf("%c", &ch);

    // Read string
    scanf("%s", str);

    // Consume newline left in buffer
    scanf("\n");

    // Read sentence
    scanf("%[^\n]%*c", sentence);

    // Output
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}

