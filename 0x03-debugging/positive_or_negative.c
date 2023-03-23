#include "main.h"
/**
 * positive_or_negative - check int if positive or negative
 * @i: int to check
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive or zero", i);
}
