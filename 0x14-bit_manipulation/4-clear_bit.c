#include "main.h"
/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index.
 * @n: A pointer to the number with bit to be cleared.
 * @index: index of the bit to be cleared
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1 << index;

	if (index >= 64)
	{
		return (-1);
	}

	b = ~b;
	*n = (*n) & b;

	return (1);
}
