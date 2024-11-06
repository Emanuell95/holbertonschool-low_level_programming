#include <stdio.h>

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int i, found;

    // Loop through each character in `s`
    while (*s) {
        found = 0;

        // Check if the character is in `accept`
        for (i = 0; accept[i] != '\0'; i++) {
            if (*s == accept[i]) {
                found = 1;
                break;
            }
        }

        // If character is not found in `accept`, stop counting
        if (!found) {
            break;
        }

        // Move to the next character in `s` and increment count
        count++;
        s++;
    }

    return count;
}

int main() {
    char str[] = "hello, world";
    char accept[] = "he";

    unsigned int result = _strspn(str, accept);
    printf("Length of prefix substring: %u\n", result);

    return 0;
}
