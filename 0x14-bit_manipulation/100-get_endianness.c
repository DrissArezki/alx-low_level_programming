#include <stdio.h>
#include "main.h"

/**
 ** get_endianness - check the code
 ** Return: Always 0.
 **/

int get_endianness(void)
{
	int a;
	char *m;

	a = 1;
	m = (char *)&a;
	return (*m);
}
