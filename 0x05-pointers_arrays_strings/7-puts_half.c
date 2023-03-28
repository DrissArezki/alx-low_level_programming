#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: char to use
 * Return: char
 */
void puts_half(char *str)
{
	int n, length;

	length = 0;

	while (str[length] != '\0')
		length++;
	if ((length + 1) % 2 != '0')
		n = (length - 1) / 2;
	else
		n = length / 2;
	n++;

	for (length = n; str[length] != '\0'; length++)
		_putchar(str[length];
				_putchar('\n');
}
