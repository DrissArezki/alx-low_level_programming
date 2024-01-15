#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	char *s, *s_pointer;
	int i, j;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length++;
	}
	length++;
	s = malloc(length * sizeof(char));
	if (s == NULL)
		return (NULL);
	s_pointer = s;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*s_pointer++ = av[i][j];
		}
	*s_pointer++ = '\n';
	}
	*s_pointer = '\0';
	return (s);
}
