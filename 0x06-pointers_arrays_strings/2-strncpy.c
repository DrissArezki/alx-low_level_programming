#include "main.h"
/**
 * strncpy - copies a string
 * @dest: char destination
 * @src: char source
 * @n: the number of strings
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
