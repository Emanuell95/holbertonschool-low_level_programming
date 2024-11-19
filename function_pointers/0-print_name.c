#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name of the person.
 * @f: function pointer to a function that processes the name.
 *
 * Return: The function is void, it does not return a value.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}
