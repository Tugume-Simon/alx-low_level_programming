#include "lists.h"

/**
 * free_listint - frees memory held by singly linked list
 * @head: pointer to head node of singly linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *one;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	one = head->next;
	free(head);
	free_listint(one);
}
