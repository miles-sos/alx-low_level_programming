#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to
 * the end of list_t list
 * @head: new node to be added
 * @str: string to add to the new node
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nNode, *temp;

	if (str == NULL)
		return (NULL);

	nNode = malloc(sizeof(list_t));

	/* Checks if malloc was successful */
	if (nNode == NULL)
		return (NULL);

	/* Assign values to new node */
	nNode->str = strdup(str);

	if (nNode->str == NULL)
	{
		free(nNode);
		return (NULL);
	}
	/* Get length of new node string */
	nNode->len = strlen(nNode->str);
	nNode->next = NULL;

	if (*head == NULL)
	{
		*head = nNode;
		return (nNode);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = nNode;
	return (nNode);
}
