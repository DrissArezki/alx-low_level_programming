#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int mem;

	mem = *a;
	*a = *b;
	*b = mem;
}
