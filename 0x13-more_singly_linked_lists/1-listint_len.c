#include "lists.h"

/**
 * listint_len: calculate the number of elmts in a linked list
 * @h: argument
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int elmts = 0;

	while(temp)
	{
		elmts++;
		temp = temp->next;
	}
	return (elmts);
}
