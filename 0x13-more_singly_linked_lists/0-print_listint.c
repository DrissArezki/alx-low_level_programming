#include "lists.h"

/**
 * print_listint - print list
 * @h: argument
 * Return: list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int length = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}
	return (length);
}
