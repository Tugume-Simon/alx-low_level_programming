#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory of a linked list
 * @head: head of a linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *first = head;

	while (head->next != NULL)
	{
		head = head->next;
	}

	free(head);
	free_list(first);
}
