#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * on the terminal
 * @n: number of times character should
 * be printed
 * Return: draw characters
 */
void print_diagonal(int n)
{
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = n; i > 0; i--)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
