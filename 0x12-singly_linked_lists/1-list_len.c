#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns
 * the number of elements in a linked list_t list.
 * @h: head struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			count++;

		temp = temp->next;
	}
	return (count);
}
