#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate through.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed for each element.
 *
 * Description: This function takes an array, its size, and a function pointer.
 * It iterates through the array, applying the function pointed to by `action`
 * on each element. If `array` or `action` is NULL, the function does nothing.
 *
 * Return: Nothing (void).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    if (array && action)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
