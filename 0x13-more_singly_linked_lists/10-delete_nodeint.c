#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node in a given pos in a linked list
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 or 0
 */
 int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
