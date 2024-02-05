#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: head of the list
 * @n: argument
 * Return: new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t*) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return(new);
}
