#include "main.h"
/**
 * _strcpy - copy string pointed by src to dest
 * @src: char to move
 * @dest: char of the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src [i];
	dest[i] = ('\0');
	return (dest);
}
