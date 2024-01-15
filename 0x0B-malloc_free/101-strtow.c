#include "main.h"
#include <stdlib.h>

int counter(char *str);
char **strtow(char *str);

/**
 * counter - count words
 * @str: string to use
 * Return: int
 */

int counter(char *str)
{
	int i, c;

	int include;

	c = 0;
	include = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && !include)
		{
			include = 1;
			c++;
		}
		else if (str[i] == ' ')
			include = 0;
	return (c);
}

/**
 * strtow - splits a string into a word
 * @str: string to split
 * Return: char
 */

char **strtow(char *str)
{
	char **comp, *tmp;
	int i, a = 0, b = 0, words, start, end, len = 0;

	while (*(str + len))
		len++;
	words = counter(str);
	if (words == 0)
		return (NULL);
	comp = (char **) malloc(sizeof(char *) * (words + 1));
	if (comp == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (b)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (b + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				comp[a] = tmp - b;
				a++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = i;
	}

	comp[a] = NULL;

	return (comp);
}
