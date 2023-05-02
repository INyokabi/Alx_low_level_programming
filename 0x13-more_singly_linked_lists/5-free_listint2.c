#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees listint_t list
 * @head: pointer to listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
