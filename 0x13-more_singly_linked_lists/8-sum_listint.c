#include "lists.h"
/**
 * sum_listint - sums all the data of a linked list
 * @head: head of the linked list
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		x = x + temp->n;
		temp = head;
	}
	return (x);
}
