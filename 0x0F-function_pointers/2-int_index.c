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

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
