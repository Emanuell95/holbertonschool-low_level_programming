#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: Nothing (void).
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char c;
    int d;
    float f;
    char *s;

    va_start(args, format);

    while (format && format[i] != '\0') 
    {
        if (i > 0)
            printf(", ");

        if (format[i] == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
        }
        else if (format[i] == 'i')
        {
            d = va_arg(args, int);
            printf("%d", d);
        }
        else if (format[i] == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
        }
        else if (format[i] == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
