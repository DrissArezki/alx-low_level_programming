#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}

	x /= 10;

	if (x != 0)
	{
		print_number(x);
	}

	_putchar((n % 10) + '0');
}

