#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data (n)
 * of a doubly linked list
 * @head: pointer to the head node of the list
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr; /* current */
	int sum = 0;

	curr = head;
	while (curr != NULL)
	{
		sum = sum + curr->n;
		curr = curr->next;
	}
	return (sum);
}
