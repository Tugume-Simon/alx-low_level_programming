#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly
 * linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of nodes in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s;

	s = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		s = s + 1;
		h = h->next;
	}
	return (s);
}
