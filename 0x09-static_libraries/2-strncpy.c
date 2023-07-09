#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of times to copy
 * Return: pointer to destination char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *des = dest;

	strncpy(dest, src, n);
	dest = '\0';

	return (des);
}
