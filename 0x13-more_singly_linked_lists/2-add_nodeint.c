#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the head pointer
 * @n: value of the new node
 * Return: address of the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/*Allocate space for new node*/
	new = (listint_t *)malloc(sizeof(listint_t));
	/*Check if space is allocated succesfully*/
	if (new == NULL)
		return (*head);
	/*Assign value to the new node*/
	new->n = n;
	/*Check if list is empty*/
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
