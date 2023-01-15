#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees memory of a doubly linked list
 * @head: pointer to head node of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr; /* current */
	dlistint_t *nxt; /* next node */

	curr = head;
	while (curr != NULL)
	{
		nxt = curr->next;
		free(curr);
		curr = nxt;
	}
}
