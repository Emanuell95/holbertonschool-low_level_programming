#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the arguments passed to the function.
 * @n: The number of arguments
 *
 * Return: The sum of all its parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int sum = 0;
    unsigned int i;

    if (n == 0)
        return (0);

    va_start(args, n);

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);

    va_end(args);

    return (sum);
}
