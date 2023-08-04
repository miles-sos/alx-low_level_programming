#include "main.h"
/**
 * get_endianness - Checks the order
 * or sequence
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *ch = (char *)&number;

	if (*ch == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
