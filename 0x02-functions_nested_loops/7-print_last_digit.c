#include "main.h"
/**
 * print_last_digit - Prints the last digit of an integer
 * @a: the integer to use
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int r;

	if (a < 0)
	a = -a;

	r = a % 10;

	if (r < 0)
	r = -r;

	_putchar(r + '0');

	return (r);
}
