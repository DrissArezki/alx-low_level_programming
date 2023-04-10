#include <stdio.h>
#include <stdlib.h>
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
		for (i = 0; i < argc; i++)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
			if (s[j] < 48 || s[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			}
		}
	}
	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
