#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data within the element that was deleted,
 * or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
