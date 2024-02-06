#include "lists.h"
/**
 * pop_listint - delete head and return data of it
 * @head: head of the list
 * Return: data of the head
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int data = (*head)->n;
	listint_t *next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (data);
}
