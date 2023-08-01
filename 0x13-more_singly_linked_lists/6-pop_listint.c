#include "lists.h"
/**
 * pop_listint - deletes the head node
 * of a listint_t linked list and returns
 * the head node's data(n)
 * @head: pointer to the head pointer
 * Return: 0 or head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = current;

	return (n);
}
