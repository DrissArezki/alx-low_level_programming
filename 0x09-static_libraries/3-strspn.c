#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to use
 * @accept: char
 * Return: number of bytes in the initial seg of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int y = 0;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
