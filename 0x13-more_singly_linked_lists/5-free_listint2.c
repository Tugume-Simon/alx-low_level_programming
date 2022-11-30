#include "lists.h"

/**
 * free_listint2 - frees memory held by singly linked list
 * @head: address of pointer to head node of singly linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *li;

	if (head == NULL)
	{
		return;
	}

	while ((*head)->next != NULL)
	{
		li = (*head)->next;
		free(*head);
		*head = li;
	}

	free(*head);
	head = NULL;
}
