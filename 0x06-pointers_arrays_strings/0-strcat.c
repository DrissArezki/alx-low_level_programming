#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j, inc;

	i = 0;

	j = 0;

	for (inc = 0; dest[inc] != '\0'; inc++)
	{
		i++;
	}
	for (inc = 0; src[inc] != '\0'; inc++)
	{
		j++;
	}
	for (inc = 0; inc <= j; inc++)
		dest[i + inc] = src[inc];

	return (dest);
}
