#include <stdio.h>
#include "lists.h"

/**
 * print_list: prints the elements of a linked list
 * @h: pointer to the list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int ctr = 0;

	while (ptr != NULL)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, h->str);
	ctr++;
	ptr = ptr->next;
	}

	return (ctr);
}
