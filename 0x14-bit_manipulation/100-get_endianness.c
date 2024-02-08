#include "main.h"
#include <stdio.h>

/**
 * get_endianess - endian
 * Return: endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *byte = (unsigned char *)&x;

	return ((byte[0] == 1) ? 1 : 0);
}
