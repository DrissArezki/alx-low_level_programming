#include "lists.h"

/**
 ** add_nodeint_end - add a new node at the end of a list
 ** @head: head of the list
 ** @n: argument
 ** Return: new linked list
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end = *head;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (end == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (new);
}
