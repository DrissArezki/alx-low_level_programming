#include <stdio.h>
#include "lists.h"

/**
 * print_list: prints the elements of a linked list
 * @h: pointer to the list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->ptr;
		s++;
	}
	return (s);
}
