#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory
 * for an array using malloc
 * @nmemb: no of members of array
 * @size: size of each member
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *bytePtr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	bytePtr = (char *)mem;
	for (i = 0; i < (size * nmemb); i++)
		bytePtr[i] = 0;

	return (bytePtr);
}
