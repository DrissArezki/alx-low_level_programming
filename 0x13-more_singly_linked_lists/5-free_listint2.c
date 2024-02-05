#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: argument
 * Return: free list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}
