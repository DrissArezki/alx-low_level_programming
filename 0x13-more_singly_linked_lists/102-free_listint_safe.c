#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: head of the linked list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *active_node = *h;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (active_node && active_node->next && active_node < active_node->next)
	{
		temp = active_node->next;
		free(active_node);
		active_node = temp;
		length++;
	}

	if (active_node)
	{
		free(active_node);
		length++;
	}

	*h = NULL;
	return (length);
}
