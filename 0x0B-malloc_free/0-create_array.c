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
	unsigned int i;
	char *s = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
