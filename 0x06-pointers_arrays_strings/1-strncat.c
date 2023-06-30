#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *des = dest;

	while (*des != '\0')
	{
		des++;
	}

	if (n > 0)
	{
		while (n)
		{
			*des = *src;
			des++;
			src++;
			n--;
		}
	}
	*des = '\0';

	return (dest);
}
