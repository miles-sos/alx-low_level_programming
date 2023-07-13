#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int a, b, len1, len2, total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2;

	new  = (char *) malloc(total * sizeof(char) + 1);

	if (new == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (total + 1); a++)
	{
		if (a < len1)
			new[a] = s1[a];
		else
			new[a] = s2[b++];
	}

	return (new);
}
