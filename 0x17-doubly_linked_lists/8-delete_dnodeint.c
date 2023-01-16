#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * from a doubly linked list
 * @head: pointer to pointer to head node of the list
 * @index: index at which to delete
 *
 * Return: 1 on successful delete, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr; /* current */
	unsigned int i;

	if (*head == NULL)
	{
		return (0);
	}

	i = 0;
	curr = *head;
	while (curr != NULL)
	{
		if (i == index)
			break;
		curr = curr->next;
		i++;
	}
	if (i != index)
		return (0);

	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;

	if (curr == *head)
		*head = curr->next;

	free(curr);
	return (1);
}
