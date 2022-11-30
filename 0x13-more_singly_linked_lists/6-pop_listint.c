#include "lists.h"

/**
 * pop_listint - deletes the head node of a singly linked list
 * @head: address of pointer to the head node
 *
 * Return: current head node's data n.
 * 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *headnode;
	listint_t *newhead;

	if (head == NULL)
		return (0);

	headnode = *head;
	newhead = headnode->next;
	free(headnode);
	*head = newhead;
	head = &newhead;

	return (newhead->n);
}

