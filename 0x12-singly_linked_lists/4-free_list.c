#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: head of the list to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str); /* frees the str that tmp points to */
		free(head); /* Frees the memory that tmp points to */
		head = temp;
	}
}
