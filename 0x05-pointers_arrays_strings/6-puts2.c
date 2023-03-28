#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: string to use
 * Return: String
 */
void puts2(char *str)
{
	int i, j;

	j = 0;

	while (str[j] != '\0')
		j++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
