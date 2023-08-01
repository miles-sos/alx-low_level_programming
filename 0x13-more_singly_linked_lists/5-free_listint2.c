#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head != NULL)
	{

		current = *head;

		while (*head != NULL)
		{
			current = (*head)->next;
			free(*head);
			*head = current;
		}
	}
}
