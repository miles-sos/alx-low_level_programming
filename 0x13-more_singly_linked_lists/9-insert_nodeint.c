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
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	ptr = *head;
	/*If idx != 0, i.e. a particular position*/
	if (idx != 0)
	{
		while (ptr != NULL && i < idx - 1)
		{
			ptr = ptr->next;
			i++;
		}
		if (ptr == NULL)
			return (NULL);
	}

	/*create new node and allocate space*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/*Assign value to newNode */
	newNode->n = n;

	/*If idx == 0, i.e. first node*/
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	/*If idx != 0, assign the newNode addr to curr *next*/
	newNode->next = ptr->next;
	ptr->next = newNode;
	return (newNode);
}
