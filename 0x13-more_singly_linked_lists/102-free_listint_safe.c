#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to head pointer
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int d;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		d = *h - (*h)->next;

		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			size++;
		}
		else
		{
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
