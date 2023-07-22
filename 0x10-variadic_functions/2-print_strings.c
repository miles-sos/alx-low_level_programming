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

char *str;
va_list mystr;

va_start(mystr, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
str = va_arg(mystr, char *);
if (str == NULL)
	str = "(nil)";

printf("%s", str);
if (i < (n - 1))
printf("%s", separator);
}
va_end(mystr);
printf("\n");
}
