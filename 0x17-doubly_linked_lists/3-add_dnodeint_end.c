#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a
 * doubly linked list
 * @head: address of pointer to the head node.
 * @n: integer -- data of the node
 *
 * Return: address of new element of NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr; /* current */

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
