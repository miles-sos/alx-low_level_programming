#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal to be checked
 * @index: bit to check
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_dv, getbw;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	num_dv = 1 << index;
	getbw = n & num_dv;
	if (getbw == num_dv)
	{
		return (1);
	}
	return (0);
}
