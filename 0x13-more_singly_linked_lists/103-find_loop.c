#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of the linked list
 * Return: address where the loop starts or error
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *var1 = head;
	listint_t *var2 = head;

	while (var2 && var2->next)
	{
		var1 = var1->next;
		var2 = var2->next->next;

		if (var1 == var2)
		{
			var1 = head;
			while (var1 != var2)
			{
				var1 = var1->next;
				var2 = var2->next;
			}
			return (var2);
		}
	}
	return (NULL);
}
