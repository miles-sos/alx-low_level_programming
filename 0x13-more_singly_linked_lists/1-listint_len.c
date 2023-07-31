#include "lists.h"
/**
 * listint_len - returns the num of elements
 * in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
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
		ptr = ptr->next;
		num += 1;
	}
	return (num);
}
