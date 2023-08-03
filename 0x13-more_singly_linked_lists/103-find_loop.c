#include "lists.h"
/**
 * find_listint_loop - finds the loop contained
 * in a linked list
 * @head : pointer to the head
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1, *n2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	n1 = head->next;
	n2 = (head->next)->next;

	while (n2)
	{
		if (n1 == n2)
		{
			n1 = head;

			while (n1 != n2)
			{
				n1 = n1->next;
				n2 = n2->next;
			}

			return (n1);
		}

		n1 = n1->next;
		n2 = (n2->next)->next;
	}

	return (NULL);
}
