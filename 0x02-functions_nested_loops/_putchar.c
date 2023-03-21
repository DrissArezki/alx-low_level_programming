#include "main.h"
#include <unistd.h>
/**
 * main - Prints the character ch
 * ch : character to print
 *
 * Return: Always 0 (Success)
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
