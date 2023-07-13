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
	int len;
	char *newStr;

	len = strlen(str);

	if (len < 1)
		return (NULL);
	newStr = (char *) malloc(len * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	strcpy(newStr, str);

	return (newStr);
}
