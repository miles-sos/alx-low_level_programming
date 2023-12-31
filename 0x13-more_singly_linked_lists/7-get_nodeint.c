#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: pointer to head node
 * @index: the nth index specified
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = head; /*Initialize ptr to point to head*/

	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL) /*Check if node does not exist*/
		return (NULL);

	return (ptr);
}
