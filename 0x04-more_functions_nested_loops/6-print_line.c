#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: indicates the number of times to print character
 * Return: void return
 */
void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
