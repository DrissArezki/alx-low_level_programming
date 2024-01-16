#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to use
 * Return: length of the string (Success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
