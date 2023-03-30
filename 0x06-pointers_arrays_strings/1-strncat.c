#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: number of bytes from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;
	for (i = 0; src[i] != '\0'; i++)
		len_src++;
	for (i = 0; i < n; i++)
		dest[len_dest + i] = src[i];
	return (dest);
}

