#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: pointer to head pointer
 * @idx: index of new node to be added
 * @n: value of new node
 * Return: address of newNode or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	/*get the length of list to check if possibility*/
	listint_t *ptr, *newNode;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);

	ptr = *head;

	/*create new node and allocate space*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < idx)
		return (NULL);

	newNode->n = n;
	newNode->next = ptr->next;
	ptr->next = newNode;

	return (newNode);
}
