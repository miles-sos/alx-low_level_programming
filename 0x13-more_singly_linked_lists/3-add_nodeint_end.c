#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list
 * @head: pointer to the head pointer
 * @n: value of the new node
 * Return: address of the head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	/*Allocate space for new node*/
	new = (listint_t *)malloc(sizeof(listint_t));

	/*Check if space is allocated succesfully*/
	if (new == NULL)
		return (NULL);

	/*Assign value to the new node*/
	new->n = n;

	/*Check if list is empty*/
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	/*Assign current to head and loop to the end*/
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
	}
	/*Return the address of new node*/
	return (new);
}
