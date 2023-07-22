#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
* print_strings - a function that prints strings,
* followed by a new line
* @separator: comma separator
* @n: number of ints
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list mystr;
va_start(mystr, n);

for (i = 0; i < n; i++)
{
if (separator == NULL)
{
printf("%s", va_arg(mystr, char *) == NULL ? "(nil)" : va_arg(mystr, char *));
}
else
{
if (i == (n - 1))
{
printf("%s", va_arg(mystr, char *));
}
else
{
printf("%s%s", va_arg(mystr, char *), separator);
}
}
}

va_end(mystr);
printf("\n");
}
