#include "main.h"
/**
 * reverse_array - reverses the content of
 * an array of integers
 * @a: array to be reversed
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
if (n > 0)
{
int i;
int tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
}
