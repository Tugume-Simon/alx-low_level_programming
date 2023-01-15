#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node of a doubly
 * linked list at a given index
 * @head: pointer to the head node of the doubly
 * linked list
 * @index: position of the node to be retrieved
 *
 * Return: address of the node or NULL if it does
 * not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int d;
	dlistint_t *curr; /* current */

	curr = head;
	d = 0;
	while (d != index)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		d = d + 1;
	}
	return (curr);
}
