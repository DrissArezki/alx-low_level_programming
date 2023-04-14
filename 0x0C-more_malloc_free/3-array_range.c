#include "main.h"
#include <stdlib.h>
/**
 * array_range - prints array of ints
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int a;

	if (min > max)
		return (NULL);

	a = max - min + 1;

	p = malloc(sizeof(int) * a);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
