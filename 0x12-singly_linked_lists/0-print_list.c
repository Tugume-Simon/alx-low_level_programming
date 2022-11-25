#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	do
	{
		n++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	} while (h != NULL);

	return (n);
}
