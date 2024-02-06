#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of the linked list
 * Return: new reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = before;

		before = *head;
		*head = next_node;
	}

	*head = before;

	return (*head);
}
