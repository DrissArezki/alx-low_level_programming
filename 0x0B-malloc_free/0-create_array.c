#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *s = (char *)malloc(size * sizeof(char));

	if s == NULL
		return (NULL);

	unsigned int i;

	for (i = 0, i < size, i++)
	{
		s[i] = c;
	}
	return (s);
}
