#include "lists.h"

/**
 * free_listint - frees a list
 * @head: argument
 * Return: free list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
