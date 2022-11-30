#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given index
 * @head: address of pointer to head node
 * @idx: index where to insert the new node
 * @n: data n of new node
 *
 * Return: address of new node, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	if (*head == NULL || head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	i = 0;
	node = *head;
	while (i < (idx - 1))
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
