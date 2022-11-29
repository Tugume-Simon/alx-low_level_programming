#include "lists.h"

/**
 * listint_len - counts the elements in a singly linked list
 * @h: pointer to the head node of singly linked list
 *
 * Return: number of elements in a singly linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
