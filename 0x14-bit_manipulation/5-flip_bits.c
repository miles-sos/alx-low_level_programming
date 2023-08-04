#include "main.h"
/**
 * flip_bits - get no of bits needed to flip
 * from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, r;
	unsigned int x, i;

	x = 0;
	r = 1;
	xor = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (r == (xor & r))
		{
			x++;
		}
		r <<= 1;
	}
	return (x);
}
