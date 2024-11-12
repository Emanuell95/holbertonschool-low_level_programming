#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

    char *str_concat(char *s1, char *s2) {
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    char *result = malloc(len1 + len2 + 1);
    if (result == NULL) return NULL;  // Allocation failure

    for (int i = 0; i < len1; i++) result[i] = s1[i];
    for (int i = 0; i < len2; i++) result[len1 + i] = s2[i];

    result[len1 + len2] = '\0';  // Null-terminate the result
    return result;
}
