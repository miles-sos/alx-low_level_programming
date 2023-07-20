#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: points to the function address
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array && !cmp && size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}
