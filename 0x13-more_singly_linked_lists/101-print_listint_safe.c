#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head pointer of first node
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *curr = head;
	const listint_t *buffer[1024] = {NULL};
	size_t x;

	while (curr != NULL)
	{
		for (x = 0; x < c; x++)
		{
			if (curr == buffer[x])
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				return (c);
			}
		}
		buffer[c] = curr;
		c++;

		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
	}
	return (c);
}
