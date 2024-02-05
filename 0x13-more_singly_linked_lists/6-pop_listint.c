#include "lists.h"
/**
 * pop_listint - delete head and return data of it
 * @head: head of the list
 * Return: data of the head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (data);
}
