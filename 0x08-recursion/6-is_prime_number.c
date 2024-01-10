#include "main.h"

int is_prime_plus(int n, int i);

/**
 * is_prime_number - returns 1 if prime number, 0 otherwise
 * @n: int to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime_plus(n, 2));
}

/**
 * is_prime_plus - calculate recursively if a number
 * is a prime number
 * @n: number to check
 * @i: int
 * Return: 1 or 0
 */
int is_prime_plus(int n, int i)
{
	if (n == 2)
		return (1);
	else if (n < 2 || n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (is_prime_plus(n, i + 1));
}
