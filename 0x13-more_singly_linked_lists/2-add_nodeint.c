#include "lists.h"

/**
 * add_nodeint - creates and adds a new node at the beginning
 * of a linked list
 * @head: address of the pointer to singly linked list
 * @n: data -- integer
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;
	return (new);
}
