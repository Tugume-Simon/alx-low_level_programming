#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - finds the number of nodes in
 * a doubly linked list
 * @h: pointer to the head of the doubly linked
 * list
 *
 * Return: number of nodes in the doubly linked
 * list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n = n + 1;
		h = h->next;
	}
	return (n);
}
