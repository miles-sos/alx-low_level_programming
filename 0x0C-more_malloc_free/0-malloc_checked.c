#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates
 * memory using malloc
 * @b: specified size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *newMem;

	newMem = malloc(b);

	if (newMem == NULL)
		exit(98);

	return (newMem);
}
