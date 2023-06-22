#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: passed to the function as the argument to check
 * Return: 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
