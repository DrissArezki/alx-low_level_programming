#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string into an int
 * @s: tring to convert
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int i = 0;
	int check = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !check)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			check = 1;
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


/**
 * main - prints multiplication of two arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		Return(1);
	}

	int num_1 = _atoi(argv[1]);
	int num_2 = _atoi(argv[2]);
	int mul = num_1 * num_2;

	printf("%d\n", mul);
	return (0);
}
