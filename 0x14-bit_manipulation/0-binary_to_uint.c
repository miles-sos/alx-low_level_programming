#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary string
 * Return: decimal rep of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	int idx = 0, i = 0, dec_total = 0, slen = 0;
	int dec_val = 1, count = 0;

	if (b == NULL)
		return (0);

	slen = strlen(b);

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
			count++;
		i++;
	}

	if (slen == count)
	{
		for (idx = (slen - 1); idx >= 0; idx--)
		{
			if (b[idx] == '1')
			{
				dec_total += dec_val;
			}
			dec_val *= 2;
		}
		return (dec_total);
	}
	return (0);
}
