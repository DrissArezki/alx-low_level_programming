#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to add for the concat
 * Return : pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int total_len;
	char *str;
	char *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	total_len = s1_len + n;

	str = (char *)malloc(total_len + 1);

	if (str == NULL)
		return (NULL);

	temp = str;
	while (*s1 != '\0')
		*temp++ = *s1++;
	while (n-- > 0)
		*temp++ = *s2++;

	*temp = '\0';

	return (str);
}
