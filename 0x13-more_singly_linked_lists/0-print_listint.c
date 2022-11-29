#include "lists.h"

/**
 * print_listint - prints members in a singly linked list
 * @h: pointer to singly linked list
 *
 * Return: number of nodes in a singly linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	if (h == NULL)
	{
		return (0);
	}

	n = 0;
	do {
		printf("%d\n", h->n);
		n++;
		h = h->next;
	} while (h != NULL);

	return (n);
}
