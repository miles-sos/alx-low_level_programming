#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	char *des = dest;

	while (*des != '\0')
	{
		des++;
	}

	while (*src != '\0')
	{
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';

	return (dest);
}
