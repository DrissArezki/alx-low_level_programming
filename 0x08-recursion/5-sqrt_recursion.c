#include "main.h"

int rec_sqrt_recursion(int i, int n);
/**
 * _sqrt_recursion - returns the natural square root
 * @n: int to use
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rec_sqrt_recursion(n, 0));
}

/**
 * rec_sqrt_recursion - the recursion for the main function
 * @n: int to calculate sqrt
 * @i: int for iteration
 * Return: square root
 */

int rec_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (rec_sqrt_recursion(n, i + 1));
}
