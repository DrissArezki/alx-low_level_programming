#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: number of bytes from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lendest = 0;
	int lensrc = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		lendest++;
	for (i = 0 ; src[i] != '\0' ; i++)
		lensrc++;
	for (i = 0 ; i < n ; i++)
		dest[lendest + i] = src[i];
	return (dest);
}
