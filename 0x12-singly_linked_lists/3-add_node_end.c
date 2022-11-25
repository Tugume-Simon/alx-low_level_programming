#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of a singly linked list
 * @head: address of the head of the linked list
 * @str: string of new head
 *
 * Return: address of the new element, NULL if its failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (new);
}
