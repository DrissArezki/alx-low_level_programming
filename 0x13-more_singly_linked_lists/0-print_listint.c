#include <lists.h>
/**
 * print_listint: print a list
 * @h: variable to use
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int length = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		length++;
		temp = temp->next
	}
	return (length);
}
