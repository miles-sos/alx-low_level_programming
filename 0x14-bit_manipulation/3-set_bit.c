#include "main.h"

/**
 * set_bit - sets value of bit to 1 at a given index.
 * @index: index of the bit to be changed
 * @n: addr of number to change it's value
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	/*check if index is within the range*/
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	/*left shift the bit based on the index*/
	x = 1 << index;
	*n = *n | x;

	/*return 1 on success*/
	return (1);
}
