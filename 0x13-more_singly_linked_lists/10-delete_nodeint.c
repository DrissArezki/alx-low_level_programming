#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node in a given pos in a linked list
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 or 0
 */
 int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *before = NULL;
	listint_t *teamp = NULL;
	unsigned int i;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
