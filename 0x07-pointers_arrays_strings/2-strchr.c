#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string in question
 * @c: character to search for
 * Return: pointer of the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
