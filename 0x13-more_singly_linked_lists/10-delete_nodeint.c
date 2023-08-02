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
	listint_t *ptr;
	listint_t *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	/*Deletion at beginning of list*/
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	ptr = *head;

	/*If index != 0, Traverse list*/
	while (i < index - 1)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
		i++;
	}

	next = ptr->next;
	ptr->next = next->next;
	free(next);
	return (1);
}
