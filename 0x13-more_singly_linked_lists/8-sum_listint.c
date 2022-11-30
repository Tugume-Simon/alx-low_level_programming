#include "lists.h"

/**
 * sum_listint - add up all data n (integers)
 * of a linked list
 * @head: pointer to the head node
 *
 * Return: sum of all data n
 * 0 if the linked list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	node = head;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
