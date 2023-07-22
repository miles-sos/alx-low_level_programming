#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that returns the
* sum of all its parameters.
* @n: number of integers
* Return: sum of integers passed
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum;

sum = 0;

if (n)
{
va_list numbers;
va_start(numbers, n);

for (i = 0; i < n; i++)
sum += va_arg(numbers, int);

va_end(numbers);

}

return (sum);
}
