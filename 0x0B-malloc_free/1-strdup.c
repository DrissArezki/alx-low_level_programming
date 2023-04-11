#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new alloc space
 * memory which contains a copy of the string str
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *duplicate;
	int length;

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc(length * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (int i = 0; i < length; i++)
		duplicate[i] = s[i];

	return (duplicate);
}
