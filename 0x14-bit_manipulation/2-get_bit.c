#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the bit in an excat index
 * @n: int
 * @index: index location
 * Return: value of bit in index  or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		unsigned long int shift = n >> index;
		int bit = shift & 1;

		return (bit);
	}
	else
	{
		return (-1);
	}
}
