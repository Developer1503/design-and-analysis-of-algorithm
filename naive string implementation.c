#include <stdio.h>
#include <string.h>

int naiveStringMatch(char text[], char pattern[]) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);
    int operations = 0; // Counter for operations performed

    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;
        for (j = 0; j < patternLength; j++) {
            operations++; // Count the comparison operation
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == patternLength) {
            printf("Pattern found at index %d\n", i);
        }
    }

    return operations;
}

int main() {
    char text[100], pattern[100];
    printf("Enter the text: ");
    gets(text); // Note: gets() is used for simplicity; consider using fgets() for safer input.
    printf("Enter the pattern: ");
    gets(pattern);

    printf("Occurrences of the pattern in the text:\n");
    int operations = naiveStringMatch(text, pattern);
    printf("Number of operations: %d\n", operations);

    return 0;
}
