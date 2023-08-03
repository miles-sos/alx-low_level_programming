#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		c++;
	}

	return (c);
}
