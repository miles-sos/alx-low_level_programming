#include "main.h"
/**
 * print_triangle - prints a triangle,
 * followed by a new line
 * @size: size of the triangle specified
 */
void print_triangle(int size)
{
	int i = 1;
	int count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			for (count = 1; count <= i; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
