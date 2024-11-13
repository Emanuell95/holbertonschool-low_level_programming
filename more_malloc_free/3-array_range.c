#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value of the range (inclusive).
 * @max: the maximum value of the range (inclusive).
 *
 * Return: pointer to the newly created array,
 *         or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max) {
    int *array;
    int i, range;

    if (min > max) {
        return NULL;
    }

    range = max - min + 1;
    array = malloc(range * sizeof(int));
    if (array == NULL) {
        return NULL;
    }

    for (i = 0; i < range; i++) {
        array[i] = min + i;
    }

    return array;
}
