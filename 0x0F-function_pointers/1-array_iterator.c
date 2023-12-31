#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: given array
 * @size: given size of array
 * @action: points to the callback function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
