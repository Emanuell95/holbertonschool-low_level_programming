#include <stdio.h>

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    char *ptr;

    // Loop through each character in the string s
    while (*s) {
        // Check if the current character in s exists in accept
        for (ptr = accept; *ptr; ptr++) {
            if (*s == *ptr) {
                count++;  // Increment count if a match is found
                break;     // Break out of the inner loop to check the next character in s
            }
        }

        // If no match was found in accept, break the outer loop
        if (*ptr == '\0') {
            break;
        }

        s++;  // Move to the next character in s
    }

    return count;
 }
