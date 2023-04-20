#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: separetes strings with comma and space
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list str;
    unsigned int i;
    char *s;

    va_start(str, n);

    for(i = 0; i < n; i++)
    {
        s = va_arg(str, char*);
        if (s == NULL)
        {
            s = "(nil)";
        }
        else if (s != NULL)
        {
            printf("%s", s);
        }
        if (i != n - 1 && separator != NULL)
        {
            printf("%s", separator);
        }
    }
    printf("\n");

    va_end(str);
}
