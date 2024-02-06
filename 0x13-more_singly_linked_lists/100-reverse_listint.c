#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of the linked list
 * Return: new reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *current = *head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = before;

		before = current;
		current = next_node;
	}

	*head = before;
	return (*head);
}
