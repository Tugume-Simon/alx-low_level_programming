#include "lists.h"

/**
 * free_listint - frees memory held by singly linked list
 * @head: pointer to head node of singly linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nxt;
	listint_t *one;

	if (head == NULL)
	{
		return;
	}

	nxt = head->next;
	one = head;
	free(one);
	free_listint(nxt);
}
