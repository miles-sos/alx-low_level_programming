#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * and initialize with a specific char
 * @size: size of the array
 * @c: character to fill array with
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
{
return (NULL);
}
ptr = (char *) malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
