#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string so encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	char nrml[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if s[i] == nrml[j];
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
