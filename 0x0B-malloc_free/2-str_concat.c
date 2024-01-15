#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	int i;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_2++;

	c = (char *) malloc((len_1 + len_2 + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		c[i] = s1[i];

	for (i = 0; i < len_2; i++)
		c[i + len_1] = s2[i];

	c[len_1 + len_2] = '\0';

	return (c);
}
