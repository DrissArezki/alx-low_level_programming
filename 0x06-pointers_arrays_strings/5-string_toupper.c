#include "main.h"
/**
 * string_toupper - change to uppercase
 * @str: the string to change
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
