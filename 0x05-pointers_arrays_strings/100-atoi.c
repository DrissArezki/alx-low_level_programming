#include "main.h"
/**
 * _atoi - convert a string into an int
 * @s: tring to convert
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int check = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !check)
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
		i = i * 10 + (*s - '0');
		}
		else if (check)
		{
		break;
		}
	s++;
	}
	return (i * sign);
}
