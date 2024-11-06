#include <stdio.h>

char *_strstr(char *haystack, char *needle) {
    // If needle is an empty string, return haystack
    if (*needle == '\0') {
        return haystack;
    }

    // Loop through each character in haystack
    while (*haystack) {
        char *h = haystack;
        char *n = needle;

        // Check if the substring starts here
        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        // If we reached the end of needle, we found the substring
        if (*n == '\0') {
            return haystack;
        }

        // Move to the next character in haystack
        haystack++;
    }

    // Return NULL if no match is found
    return NULL;
}
