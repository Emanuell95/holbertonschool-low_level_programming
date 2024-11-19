#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Description: This function iterates through the array and applies the `cmp`
 * function to each element. If `cmp` returns a non-zero value for an element,
 * the function returns the index of that element.
 *
 * Return: The index of the first matching element, or -1 if no match is found
 * or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }

    return (-1); 
}
