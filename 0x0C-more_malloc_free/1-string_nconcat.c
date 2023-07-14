#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the number of bytes to be used
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, s1L, s2L, tL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1L = strlen(s1);
	s2L = (n >= strlen(s2)) ? strlen(s2) : n;
	tL = s1L + s2L + 1;

	s = malloc(sizeof(*s) * tL);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; j < s2L; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
