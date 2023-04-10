#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints multiplication of two arguments
 * @argc: arguments count
 * @argv: arguments vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
