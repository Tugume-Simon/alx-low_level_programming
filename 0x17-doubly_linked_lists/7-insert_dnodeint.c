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
	while (i < idx && curr != NULL)
	{
		if (curr->next == NULL)
		{
			i = i + 2;
			break;
		}
		curr = curr->next;
		i = i + 1;
	}

	if (i < idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	if (i == idx + 1)
	{
		new->next = curr->next;
		new->prev = curr;
		curr->next = new;
	}
	else
	{
		new->prev = (i == 0) ? NULL : curr->prev;
		new->next = (curr != NULL) ? curr: NULL;
		if (curr->prev != NULL)
			curr->prev->next = new;
		if (i == 0)
			*h = new;
	}
	return (new);
}
