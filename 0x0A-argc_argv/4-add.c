#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - adds positive nuhmbers
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];

			for (j = 0; s[j] != '\0'; j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
	printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
