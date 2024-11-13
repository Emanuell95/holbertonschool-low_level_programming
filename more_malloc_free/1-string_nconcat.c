#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated space in memory containing s1,
 *         followed by the first n bytes of s2, null-terminated.
 *         If function fails, returns NULL.
 *         If NULL is passed for s1 or s2, treats it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, total_len;
    char *new_str;
    unsigned int i, j;

    
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    
    len1 = strlen(s1);
    len2 = strlen(s2);

    
    if (n >= len2)
        n = len2;

    
    total_len = len1 + n;

    
    new_str = malloc(total_len + 1);
    if (new_str == NULL)
        return (NULL);

   
    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];

    /* Copy first n characters of s2 to new_str */
    for (j = 0; j < n; j++)
        new_str[i + j] = s2[j];

    /* Null-terminate the new string */
    new_str[i + j] = '\0';

    return (new_str);
}
