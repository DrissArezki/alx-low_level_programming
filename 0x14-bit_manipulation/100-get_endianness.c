#include "main.h"
#include <stdio.h>

/**
 * get_endianness - endian
 * Return: endian
 */
int get_endianness(void)
{
	unsigned int number = 1;

	if (*((char *)&number) == 1)
		return (1);
	else
		return (0);
}
