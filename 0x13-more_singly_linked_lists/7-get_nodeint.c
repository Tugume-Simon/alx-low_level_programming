#include "lists.h"

/**
 * get_nodeint_at_index - finds and returns a node in a
 * linked list at given index.
 * @head: pointer to head node
 * @index: index of listint_t to find
 *
 * Return: node at index.
 * NULL if node at given index does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	i = 0;
	node = head;
	while (i != index)
	{
		node = node->next;
		if (node)
			i++;
		else
			return (NULL);
	}

	return (node);
}
