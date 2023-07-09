#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: argument to be passed to the function to check the case
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

