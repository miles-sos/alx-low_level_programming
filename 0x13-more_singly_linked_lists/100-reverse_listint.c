#include "lists.h"
/**
 * reverse_listint - reverses a listint_int
 * linked list.
 * @head: pointer to head pointer
 * Return: pointer thr 1st node of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv, *next;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	pv = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = next;
	}
	*head = pv;
	return (*head);
}
