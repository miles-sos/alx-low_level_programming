#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the head pointer
 * @index: index of node to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	curr = *head;
	prev = *head;
	/*Deletion at beginning of list*/
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
	/*If index != 0, Traverse list*/
	while (i < index - 1 && curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	/*If index is not found*/
	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);
	curr = NULL;
	return (1);
}
