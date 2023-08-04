#include "main.h"

/**
 * _power - calculates the b ^ pow
 * @b: base e.g. 2
 * @pow: power e.g ^ 3
 *
 * Return: value of (base ^ power)
 */
unsigned long int _power(unsigned int b, unsigned int pow)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= pow; i++)
		n *= b;
	return (n);
}

/**
 * print_binary - prints the binary
 * representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dv, getbw;
	char status;

	status = 0;
	dv = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (dv != 0)
	{
		getbw = n & dv;
		if (getbw == dv)
		{
			status = 1;
			_putchar('1');
		}
		else if (status == 1 || dv == 1)
		{
			_putchar('0');
		}
		dv >>= 1;
	}
}
