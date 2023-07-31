#include "lists.h"
/**
 * print_listint - prints all the elements
 * of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	/*Assign current to point to head*/
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count += 1;
	}
	return (count);
}
