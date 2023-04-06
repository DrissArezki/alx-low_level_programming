#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: reverse string
 */
void rev_string(char *s)
{
	int i;
	int inc = 0;
	char c = s[0];

	while (s[inc] != '\0')
		inc++;

	for (i = 0; i < inc; i++)
	{
		inc--;
		c = s[i];
		s[i] = s[inc];
		s[inc] = c;
	}
}
