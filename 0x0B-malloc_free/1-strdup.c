#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str: given string to be copied
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *newStr;

	if (str == 0)
		return (NULL);

	newStr = (char *) malloc(strlen(str) * sizeof(char) + 1);

	if (newStr == NULL)
		return (NULL);

	strcpy(newStr, str);

	return (newStr);
}
