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
	unsigned int i;

	i = 0;
	node = *head;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	i--;
	
	if (index > i)
		return (-1);

	i = 0;
	node = *head;
	while (i != (index - 1))
	{
		node = node->next;
		i++;
	}
	i

