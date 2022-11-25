#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
