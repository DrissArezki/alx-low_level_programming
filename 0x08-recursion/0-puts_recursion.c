#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to use
 * Return: 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
