#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to add for the concat
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i = 0, j = 0;
	char *str;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}

	if (n >= s2_len)
		n = s2_len;

	str = malloc(sizeof(char) * (s1_len + n + 1));

	if (str == NULL)
		return (NULL);

	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < s2_len && i < (s1_len + n))
		str[i++] = s2[j++];

	while (n >= s2_len && i < (s1_len + s2_len))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
