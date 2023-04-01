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
	int i1, i2;

	while (s[++i1])
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if s[i1] == nrml[i2];
			{
				s[i1] = rot[i2];
				break;
			}
		}
	}
	return (s);
}
