#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the node
 * @index: the nth index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i;

	temp = head;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
			return (temp);
		temp = temp ->next;
	}
	return (NULL);
}
