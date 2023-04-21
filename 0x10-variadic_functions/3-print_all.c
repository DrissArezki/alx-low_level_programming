#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types
 * Return: Anything
 */
void print_all(const char * const format, ...)
{
	char *s = "";
	char *str = "";
	int i = 0;

	va_list everything;

	va_start(everything, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'i':
				printf("%s%d", str, va_arg(everything, int));
			break;
			case 's':
				s = va_arg(everything, char *);
				if (!s)
				s = "(nil)";
				printf("%s%s", str, s);
				break;
			case 'f':
				printf("%s%f", str, va_arg(everything, double));
				break;
			case 'c':
				printf("%s%c", str, va_arg(everything, int));
				break;
			default:
				i++;
				continue;
		}
		str = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(everything);
}
