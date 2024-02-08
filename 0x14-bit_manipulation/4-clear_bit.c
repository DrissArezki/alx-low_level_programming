#include <stdio.h>
#include "main.h"
/**
 ** clear_bit - sets the value of a bit to 1 at a given index
 ** @n: argument
 ** @index: the index
 ** Return: 1 or -1
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
