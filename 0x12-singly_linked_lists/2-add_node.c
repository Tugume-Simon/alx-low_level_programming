#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the head of a singly linked list
 * @head: address of the head of the linked list
 * @str: string of new head
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	new->len = n;

	new->next = *head;
	*head = new;

	return (*head);
}
