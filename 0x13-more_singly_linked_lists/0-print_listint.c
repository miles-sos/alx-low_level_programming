#include "lists.h"
/**
 * print_listint - prints all the elements
 * of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;
	listint_t *ptr;
	const listint_t *current;

	if (h == NULL)
		return (0);

	current = h;
	ptr = (listint_t *)current;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num += 1;
	}
	return (num);
}
