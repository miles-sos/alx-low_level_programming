#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	/*Create two pointers to traverse the list*/
	listint_t *curr, *nextNode;

	/*Check if list is empty*/
	if (head == NULL)
		return;

	/*Assign the current to point to head*/
	curr = head;

	/*Traverse each node and free the node*/
	while (curr != NULL)
	{
		nextNode = curr->next;
		free(curr);
		curr = nextNode;
	}
}
