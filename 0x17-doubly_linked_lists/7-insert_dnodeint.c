#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a
 * doubly linked list at a given index
 * @h: address of pointer to the head node of the list
 * @idx: index to be inserted at
 * @n: data of new node
 *
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr; /* current */
	dlistint_t *new;
	unsigned int i;

	curr = *h;
	i = 0;
	while (i != idx - 1)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
		i = i + 1;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->prev = curr;
	new->next = curr->next;
	curr->next->prev = new;
	curr->next = new;

	return (new);
}
