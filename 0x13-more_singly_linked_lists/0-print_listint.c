#include "lists.h"
/**
 * print_listint - prints all the elements
 * of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/*Creates a counter*/
	size_t num = 0;

	/*Loops through the list*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
