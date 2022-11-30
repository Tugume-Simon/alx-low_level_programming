#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to head node
 * @index: index of node to be deleted
 *
 * Return: On success 1, on failure -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *nxt;
	listint_t *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		nxt = node->next;
		free(node);
		*head = nxt;
		return (1);
	}
	i = 0;
	while (i < (index - 1))
	{
		if (node == NULL)
			return (-1);
		node = node->next;
		i++;
	}
	curr = node->next;
	nxt = curr->next;
	node->next = nxt;
	free(curr);

	return (1);
}
