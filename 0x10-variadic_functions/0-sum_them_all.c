#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all params
 * @n: int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list prm;

	va_start(prm, n);

	for (i = 0; i < n; i++)
		sum += va_arg(prm, int);

	va_end(prm);
	return (sum);
}
