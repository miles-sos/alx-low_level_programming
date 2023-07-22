#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
* print_numbers - a function that prints numbers,
* followed by a new line
* @separator: first mandatory arg
* @n: number of ints
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

if (separator != NULL)
{
va_list myvalues;
va_start(myvalues, n);

if (n)
{
for (i = 0; i < n; i++)
{
if (i == (n - 1))
printf("%d", va_arg(myvalues, int));
else
printf("%d%s", va_arg(myvalues, int), separator);
}
printf("\n");
}
}
}
