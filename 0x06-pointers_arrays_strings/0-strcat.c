#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[j])
	{
		j++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
