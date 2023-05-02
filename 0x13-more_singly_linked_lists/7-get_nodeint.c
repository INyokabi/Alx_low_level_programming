#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that returns the nth node
 * of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, otherwise return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}
	return (tmp ? tmp : NULL);
}
