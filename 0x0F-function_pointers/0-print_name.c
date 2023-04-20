#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using pointer to f
 * @name: name to add
 * @f: pointer to function
 * Return: 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
