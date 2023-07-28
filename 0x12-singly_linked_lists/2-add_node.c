#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the
 * beginning of a list_t list
 * @head: the new node to be added
 * @str: the string member of new node
 * Return: address of new Node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *nNode;

	nNode = malloc(sizeof(list_t));
	if (nNode == NULL)
	{
		return (NULL);
	}
	nNode->len = strlen(str);
	nNode->str = strdup(str);
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}
