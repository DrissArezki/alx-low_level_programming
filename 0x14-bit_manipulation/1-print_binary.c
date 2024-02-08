#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary form of the number n
 * @n: number to convert
 * Return: n
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
