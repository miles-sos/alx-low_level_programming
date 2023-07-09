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

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (des);
}
