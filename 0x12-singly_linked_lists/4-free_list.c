#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to a list_t list
 * Return: void
*/
void free_list(list_t *head)
{
if (head != NULL)
{
	/* Recursively call the function */
	/* passing the next node */
	free_list(head->next);
	if (head->str)
		/* frees node string member */
		free(head->str);
	/* frees entire node memory */
	free(head);
	}
}
