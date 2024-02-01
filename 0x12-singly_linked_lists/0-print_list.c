#include <stdio.h>
#include "lists.h"

/**
 * print_list: prints the elements of a linked list
 * @h: pointer to the list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *p = h;
	size_t ctr = 0;

	while(p)
	{
		printf("[d] %s\n", p->len, (p->str ? p->str : "[0] (nil)"));
		ctr++;
		p = p->ptr;
	}

	return ctr;
}
