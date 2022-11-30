#include "lists.h"

/**
 * free_listint2 - frees memory held by singly linked list and
 * sets the head to NULL
 * @head: address of pointer to head node of singly linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *li;
	listint_t *nxt;

	if (head == NULL)
	{
		return;
	}

	li = *head;
	while (li != NULL)
	{
		nxt = li->next;
		free(li);
		li = nxt;
	}

	free(li);
	*head = NULL;
	head = NULL;
}
