#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to , followed by a new line
 * Description: take no argument
 * Return: numbers 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
