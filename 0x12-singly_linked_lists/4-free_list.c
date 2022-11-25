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
	list_t *n;

	if (head == NULL)
	{
		free(head);
		exit(0);
	}

	n = head;
	while (n != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
		n = head;
	}
}
