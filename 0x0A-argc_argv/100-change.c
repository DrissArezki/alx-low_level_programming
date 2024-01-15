#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min num of coins change
 * @argv: arguments vector
 * @argc: arguments counter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	int money, i, total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	total = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		if (money >= coins[i])
		{
			total++;
			money -= coins[i];
		}
	}
	printf("%d\n", total);
	return (0);
}
