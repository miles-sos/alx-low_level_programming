#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints
 * all the elements of a list_t list.
 * @h: head struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0, len = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			len = strlen(temp->str);
			printf("[%d] %s\n", len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
