#include "function_pointers.h"
/**
 * print_name - prints a name using pointer to f
 * @name: name to add
 * @f: pointer to function
 * Return: 0 (Success)
 */
void print_name(char *name, coid (*f)(char*))
{
	if (name && f)
	{
		(*f)(name);
	}
}
